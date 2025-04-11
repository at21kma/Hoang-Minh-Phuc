#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double tinh(double x, double eps) {
    double E = 1;
    double a=1;
    int n = 1;

    do {

        a*= x/n;
        E += a;
        n++;
    } while (fabs(a) >= eps);

    return E;
}

int main() {
    double x, eps;

    // Nhập giá trị x và eps từ bàn phím
    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    printf("Nhap do chinh xac eps: ");
    scanf("%lf", &eps);
    double ket_qua = tinh(x, eps);
    printf("e mu %.2f = %.6f\n", x, ket_qua);

    return 0;
}
