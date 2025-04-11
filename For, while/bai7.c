#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    double sum=0;
    printf("Nhap vao 1 so nguyen duong N: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=1.0/i;
    }
    printf("Tong S=1+1/2+1/3+...+1/N la: %lf",sum);
    return 0;
}
