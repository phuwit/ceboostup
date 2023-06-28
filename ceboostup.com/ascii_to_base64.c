// Base64 คือ วิธีการเข้ารหัสข้อมูลรูปแบบหนึ่ง ที่จะเปลี่ยนข้อความ หรือข้อมูลต้นฉบับไปเป็นข้อความ หรือข้อมูลชุดใหม่ ที่ไม่สามารถอ่าน หรือรู้ว่าข้อมูลชุดนี้คืออะไร ซึ่งการเข้ารหัสชนิดนี้จะแทนที่ข้อมูลด้วยตัวอักษร 64 ตัว นั่นคือที่มาของ BASE64  ซึ่่งวิธีการถอดรหัสด้วยตนเองนั้นค่อนข้างจะซับซ้อน คิอ  จะทําย้อนกลับโดยให้นําข้อมูลมาแปลงเป็นฐานสอง 6 bit มาเรียงต่อกันก่อน แล้วนํามาจัดกลุ่ม กลุ่มละ 8 bit โดย bit สุดท้ายที่เหลือไม่ครบ 8 bit ให้ตัดทิ้ง หลังจากนั้นก็แปลงเลขฐานสอง 8 bit แต่ละชุดเป็นข้อมูล ASCII โดยในข้อนี้มีอยากให้น้องช่วยพี่โบ๊ทในการเขียนโปรแกรมเพื่อเข้ารหัส Base64 เพราะว่าพี่โบ๊ทไม่ไหวแล้วววววววว โดยน้องๆสามารถศึกษาเพิ่มเติมได้จาก link ที่พี่ใส่ไว้ใน เพิ่มเติมเลยครับ

// #include "includes.h"

// #include "os.h"
#include "base64.h"

static const unsigned char base64_table[65] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int main () {
    char input[1000];

    for(int i = 0; i < 1000; i++) {
        input[i] = '\0';
    }

    fgets(input, 1000, stdin);
}

/**
 * base64_encode - Base64 encode
 * @src: Data to be encoded
 * @len: Length of the data to be encoded
 * @out_len: Pointer to output length variable, or %NULL if not used
 * Returns: Allocated buffer of out_len bytes of encoded data,
 * or %NULL on failure
 *
 * Caller is responsible for freeing the returned buffer. Returned buffer is
 * nul terminated to make it easier to use as a C string. The nul terminator is
 * not included in out_len.
 */
unsigned char * base64_encode(const unsigned char *src, size_t len,
			      size_t *out_len)
{
	unsigned char *out, *pos;
	const unsigned char *end, *in;
	size_t olen;
	int line_len;

	olen = len * 4 / 3 + 4; /* 3-byte blocks to 4-byte */
	olen += olen / 72; /* line feeds */
	olen++; /* nul termination */
	if (olen < len)
		return NULL; /* integer overflow */
	out = os_malloc(olen);
	if (out == NULL)
		return NULL;

	end = src + len;
	in = src;
	pos = out;
	line_len = 0;
	while (end - in >= 3) {
		*pos++ = base64_table[in[0] >> 2];
		*pos++ = base64_table[((in[0] & 0x03) << 4) | (in[1] >> 4)];
		*pos++ = base64_table[((in[1] & 0x0f) << 2) | (in[2] >> 6)];
		*pos++ = base64_table[in[2] & 0x3f];
		in += 3;
		line_len += 4;
		if (line_len >= 72) {
			*pos++ = '\n';
			line_len = 0;
		}
	}

	if (end - in) {
		*pos++ = base64_table[in[0] >> 2];
		if (end - in == 1) {
			*pos++ = base64_table[(in[0] & 0x03) << 4];
			*pos++ = '=';
		} else {
			*pos++ = base64_table[((in[0] & 0x03) << 4) |
					      (in[1] >> 4)];
			*pos++ = base64_table[(in[1] & 0x0f) << 2];
		}
		*pos++ = '=';
		line_len += 4;
	}

	if (line_len)
		*pos++ = '\n';

	*pos = '\0';
	if (out_len)
		*out_len = pos - out;
	return out;
}
