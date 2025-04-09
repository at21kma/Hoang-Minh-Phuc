#include <stdio.h>
#include <stdlib.h>
void thay_gt_am(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0){
            a[i]=0;
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
     printf("Mang da nhap la: ");
    in_mang(a,n);
    thay_gt_am(a,n);
    printf("Mang sau khi da thay the cac phan tu co gia tri am bang gia tri 0: ");
    in_mang(a,n);

    return 0;
}
