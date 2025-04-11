#include <stdio.h>
#include <math.h>


long long giai_thua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long gt = 1;
    for (int i = 2; i <= n; i++) {
        gt *= i;
    }
    return gt;
}


double tinh_sin(double x, double eps) {
    double sin = 0;
    int n = 0;
    double term;

    do {

        term = pow(-1, n) * pow(x, 2 * n + 1) / giai_thua(2 * n + 1);
        sin += term;
        n++;
    } while (fabs(term) >= eps);

    return sin;
}

int main() {
    double x, eps;


    printf("Nhap gia tri x (do): ");
    scanf("%lf", &x);
    printf("Nhap do chinh xac  eps: ");
    scanf("%lf", &eps);


    double a = x * 3.14 / 180;


    double ket_qua = tinh_sin(a, eps);
    printf("sin(%.2f do) = %.10f\n", x , ket_qua);
    return 0;
}
