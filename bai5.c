#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c;
    printf("Nhap vao a: ");
    scanf("%lf",&a);
    printf("Nhap vao b: ");
    scanf("%lf",&b);
    printf("Nhap vao c: ");
    scanf("%lf",&c);
    double delta=b*b-4*a*c;
    double x1=(-b+sqrt(delta))/(2*a);
    double x2=(-b-sqrt(delta))/(2*a);
    double x=-b/(2*a);
    if(a==0)
    {
        printf("Phuong trinh co nghiem duy nhat la: x = %lf",-c/b);
    }
    else
    {
        if(delta==0)
        {
            printf("Phuong trinh co nghiem kep la: x = %lf",x);
        }
        else if(delta>0)
        {
            printf("Phuong trinh co 2 nghiem phan biet la:\n");
            printf("x1 = %lf\n",x1);
            printf("x2 = %lf\n",x2);
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }

}
