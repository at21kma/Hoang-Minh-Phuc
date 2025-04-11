#include <stdio.h>
#include <stdlib.h>
int dem(int *a,int x,int n)
{
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: \n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int x;
    printf("Nhap vao so x: \n");
    scanf("%d",&x);
    int count=dem(a,x,n);
    printf("So lan xuat hien cua x trong mang la: %d",count);


    return 0;
}
