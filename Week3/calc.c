// calc.c
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h> // M_PI 상수 있다

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { // b는 0이면 안 돼요
	if (b == 0) {
		printf("Error: Divide by 0");
		return 0;
	}
	return a / b;
}

double circ_area(double r) {
	return M_PI * r * r;
} // 넓이 3.1415972

double circ_circ(double r) {
	return 2 * M_PI * r;
} // 둘레