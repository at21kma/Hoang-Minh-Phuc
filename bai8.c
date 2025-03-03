#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Nhap vao 3 so : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    int i=0,j=0,k=0;
    if((a*a == b*b + c*c) || (a*a + b*b == c*c) || (b*b == a*a + c*c))
    {
        i=1;
    }
    if((a==b) || (b==c) || (c==a))
    {
        j=1;
    }
    if((a==b) && (b == c))
    {
        k=1;
    }

    if(a>0&&b>0&&c>0)
    {
        if((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
        {
            if(i==1 && j==1)
            {
                printf("(%lf, %lf, %lf) la 3 canh cua tam giac vuong can",a,b,c);
            }
            else
           {
            if(i==1)
                {
                    printf("(%lf, %lf, %lf) la 3 canh cua tam giac vuong",a,b,c);
                }
                else if(j==1)
                {
                    printf("(%lf, %lf, %lf) la 3 canh cua tam giac can",a,b,c);
                }
                else if(k==1)
                {
                    printf("(%lf, %lf, %lf) la 3 canh cua tam giac deu",a,b,c);
                }
                else if(k==0 &&i==0&&j==0){
                    printf("(%lf, %lf, %lf) la 3 canh cua tam giac thuong",a,b,c);

                }
            }
        }
        else
        {
            printf("(%lf, %lf, %lf) khong la 3 canh cua tam giac",a,b,c);

        }
    }
    else
    {
        printf("(%lf, %lf, %lf) khong la 3 canh cua tam giac",a,b,c);
    }
    return 0;
}
