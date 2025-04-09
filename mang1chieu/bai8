#include <stdio.h>
#include <stdlib.h>
void doiCho(int *a,int i,int j)
{
    int tempt=a[i];
    a[i]=a[j];
    a[j]=tempt;
}
void tang_dan(int *a,int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
             if(a[j]>a[j+1]){
                doiCho(a,j,j+1);
             }
        }
    }
}
void in_mang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int *ghep_mang(int *a,int *b,int n,int m)
{
    int *x=(int*)malloc((m+n)*sizeof(int));
    int i=0,j=0,k=0;

        while(i<n&&j<m){
            if(a[i]<=b[j]){
                x[k++]=a[i++];
            }
            else{
                x[k++]=b[j++];
            }
        }
        while(i<n){
            x[k++]=a[i++];
        }
        while(j<m){
            x[k++]=b[j++];
        }


    return x;
}
int main()
{
    int n,m;
    printf("Nhap vao so phan tu cua mang 1: \n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Nhap cac phan tu cua mang 1: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Nhap vao so phan tu cua mang 2: \n");
    scanf("%d",&m);
    int *b=(int*)malloc(m*sizeof(int));
    printf("Nhap cac phan tu cua mang 2: \n");
    for(int j=0;j<m;j++)
    {
        scanf("%d",b+j);
    }

    printf("2 mang da nhap la: \n");
    printf("Mang 1: ");
    in_mang(a,n);
    printf("Mang 2: ");
    in_mang(b,m);
    tang_dan(a,n);
    tang_dan(b,m);
    printf("2 mang da nhap sau khi duoc sap xep theo thu tu tang dan la: \n");
    printf("Mang 1: ");
    in_mang(a,n);
    printf("Mang 2: ");
    in_mang(b,m);
    int *x=ghep_mang(a,b,n,m);
    printf("Mang tao thanh khi ghep mang 1 va 2 sau khi da duoc sap xep theo thu tu tang dan la: \n");
    in_mang(x,n+m);

    return 0;
}
