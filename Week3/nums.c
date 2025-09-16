// nums.c
#include <stdio.h>
#include "calc.h"

int main(void) {
	int decimal = 42;
	int octal = 052;
	int hex = 0x2A;
	int binary = 0b101010; // C언어가 지원하지 않지만...

	printf("Decimal: %d\n", decimal);
	printf("Octal: %o (Prefix: 0%o) = %d\n",
		octal, octal, octal);
	printf("Hexadecimal: %x (Prefix: 0x%x) = %d\n",
		hex, hex, hex);
	printf("Binary: 0b101010 = %d\n", binary);

	printf("\n--------------------\n");
	printf("|      ~MATH!!~      |\n");
	printf("--------------------\n\n");

	printf("%o + %x = %d", octal, hex, Sum(octal, hex)); // Sum()
	printf("%x - %o = %d", hex, octal, Sub(hex, octal)); // Sub()
	printf("%o * %x = %d", octal, hex, Mul(octal, hex)); // Mul()
	printf("%x / %o = %d", hex, octal, Div(hex, octal)); // Div()
	printf("반지름 %x 원주율: %.5f\n",
		hex, circ_circ((double)hex)); // circ_circ()
	printf("반지름 %o 넓이: %.5f\n",
		octal, circ_area((double)octal)); // circ_area()

	return 0;
}