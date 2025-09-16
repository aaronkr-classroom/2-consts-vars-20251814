// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void) {
	int a = 4, b = 5;

	printf("더하기 결과는: %d\n", Sum(a, b)); // 9
	printf("빼기 결과는: %d\n", Sub(a, b)); // -1
	printf("곱하기 결과는: %d\n", Mul(a, b)); // 20
	printf("나누기 결과는: %d\n", Div(a, b)); // 0

	printf("반지름 a인 원의 넓이는: %.3f\n", circ_area(a));
	printf("반지름 a인 원의 원주율은: %.3f\n", circ_circ(a));

	return 0;

}