#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,n;
    printf("Nhap vao 10 so nguyen: ");
    for(i=0;i<10;i++){
        scanf("%d",&n);
        sum+=n;

    }
    printf("Tong cua 10 so nguyen vua nhap la : %d",sum);
    return 0;
}
