#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,e,c,d,f;
    printf("Nhap vao a: ");
    scanf("%lf",&a);
    printf("Nhap vao b: ");
    scanf("%lf",&b);
    printf("Nhap vao e: ");
    scanf("%lf",&e);
    printf("Nhap vao c: ");
    scanf("%lf",&c);
    printf("Nhap vao d: ");
    scanf("%lf",&d);
    printf("Nhap vao f: ");
    scanf("%lf",&f);
    double D=a*d-b*c;
    double Dx=e*d-f*b;
    double Dy=a*f-e*c;
    double x=Dx/D;
    double y=Dy/D;
    if(D==0 )
    {
        if(Dx==0 && Dy==0)
        {
            printf("He phuong trinh co vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %lf\n",x);
        printf("y = %lf\n",y);
    }

    return 0;
}
