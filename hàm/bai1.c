#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double tinh_ham_mu(double x,double y)
{
    double n=1;
    for(int i=0;i<y;i++){
        n*=x;
    }
    return n;
}
int main() {
    double x,y;
    printf("Nhap vao so thuc x: \n");
    scanf("%lf",&x);
    printf("Nhap vao so thuc y: \n");
    scanf("%lf",&y);
    double n=tinh_ham_mu(x,y);
    printf("%lf mu %lf = %lf",x,y,n);
    return 0;
}
