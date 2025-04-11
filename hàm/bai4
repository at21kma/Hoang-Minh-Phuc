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
    int n,m,p,q;
    printf("Nhap vao so hang cua ma tran 1: \n");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran 1: \n");
    scanf("%d",&m);
    printf("Nhap vao so hang cua ma tran 2: \n");
    scanf("%d",&p);
    printf("Nhap vao so cot cua ma tran 2: \n");
    scanf("%d",&q);
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int d[100][100];
    printf("Tao ma tran 1: \n");
    nhap_ma_tran(a,n,m);
    printf("Tao ma tran 2: \n");
    nhap_ma_tran(b,p,q);
    if(m==p){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++){
            c[i][j]=0;
         for(int k=0;k<m;k++){
            c[i][j]+=a[i][k]*b[k][j];
         }
        }
    }
    printf("Tich cua hai ma tran la ma tran: \n");
    in_ma_tran(c,n,q);
    }
    else{
        printf("Khong the tinh tich cua 2 ma tran do khong thoa man tinh chat nhan ma tran\n");
    }
    if(n==p && m==q){


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Tong cua hai ma tran la ma tran: \n");

    in_ma_tran(d,n,m);
    }
    else{
        printf("Khong the tinh tong cua 2 ma tran do khong thoa man tinh chat cong ma tran\n");
    }


    return 0;
}
