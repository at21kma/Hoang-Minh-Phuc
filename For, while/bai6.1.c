#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,a1,b1;
    printf("Nhap vao 2 so nguyen duong: ");
    scanf("%d %d",&a,&b);
     b1=b;
     a1=a;
    while(b1!=0){
        int tempt=b1;
        b1=a1%b1;
        a1=tempt;
    }
    printf("UCLN cua %d va %d la: %d\n",a,b,a1);
    printf("BCNN cua %d va %d la: %d\n",a,b,(a*b)/a1);

    return 0;
}
