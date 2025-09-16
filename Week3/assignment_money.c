#include <stdio.h>   
#include <math.h>   
#include "calc.h"    

double compound_interest(double P, double r, int n, int t) {
    return P * pow(1 + r / n, n * t);
    // pow �Լ��� (��, ����) ���·� ���� ���
}

int main() {
    double P = 1000000.0;  // ����
    double r = 0.10;       // �������� 10% 
    int n = 12;            // �� 12�� ����
    int t = 40;            // ���� �Ⱓ 40��

    double A = compound_interest(P, r, n, t); 

    printf("40�� �� �̷� ��ġ�� %.0f���Դϴ�.\n", A);

    return 0;
}
