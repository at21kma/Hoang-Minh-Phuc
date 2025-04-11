#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    double sum=0;
    double gt=1;
    int i;
    for(i=1;i<=n;i++){
        gt*=1.0/i;
        sum+=gt;
    }
    printf("Tong S la: %lf",sum);
    return 0;
}
