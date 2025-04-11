#include <stdio.h>
#include <stdlib.h>
void chuyenDoiCoSo(int n)
{
    int r=n%2;
    if(n==0){
        return;
    }
    else{
        chuyenDoiCoSo(n/2);
        printf("%d",r);
    }
}
int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: \n");
    scanf("%d",&n);
    printf("n trong he co so 2 co dang: ");
    chuyenDoiCoSo(n);
    printf("\n");
    printf("n trong he co so 16 co dang: %X\n",n);
    printf("n trong he co so 8 co dang: %o\n",n);

    return 0;
}
