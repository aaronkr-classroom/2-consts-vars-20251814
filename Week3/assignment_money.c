#include <stdio.h>   
#include <math.h>   
#include "calc.h"    

double compound_interest(double P, double r, int n, int t) {
    return P * pow(1 + r / n, n * t);
    // pow 함수는 (밑, 지수) 형태로 숫자 계산
}

int main() {
    double P = 1000000.0;  // 원금
    double r = 0.10;       // 연이자율 10% 
    int n = 12;            // 연 12번 복리
    int t = 40;            // 투자 기간 40년

    double A = compound_interest(P, r, n, t); 

    printf("40년 후 미래 가치는 %.0f원입니다.\n", A);

    return 0;
}
