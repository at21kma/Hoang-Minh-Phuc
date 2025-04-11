#include <stdio.h>
#include <stdlib.h>
void nhap_ma_tran(int a[100][100],int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void in_ma_tran(int a[100][100],int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m,n;
    printf("Nhap vao so hang cua ma tran: \n");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran: \n");
    scanf("%d",&m);
    int a[100][100];
    int b[100][100];
    int c[100][100];
    printf("Tao ma tran 1: \n");
    nhap_ma_tran(a,n,m);
    printf("Tao ma tran 2: \n");
    nhap_ma_tran(b,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Tong cua hai ma tran la ma tran: \n");
    in_ma_tran(c,n,m);


    return 0;
}
