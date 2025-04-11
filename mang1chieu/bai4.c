#include <stdio.h>
#include <stdlib.h>
void tim_maxMin(int *a,int n,int *max,int *min)
{
    *max=a[0];
    *min=a[0];

    for(int i=0;i<n;i++){
        if(a[i]>*max){
            *max=a[i];

        }
        if(a[i]<*min){

            *min=a[i];
        }

    }


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
    int max,min,i1,i2;
    tim_maxMin(a,n,&max,&min);
    printf("Phan tu lon nhat trong mang la %d\n",max,i1);
    printf("Vi tri xuat hien phan tu lon nhat: ");
    for(int i=0;i<n;i++){
        if(a[i]==max){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Phan tu be nhat trong mang la %d\n",min,i2);
    printf("Vi tri xuat hien phan tu nho nhat: ");
    for(int i=0;i<n;i++){
        if(a[i]==min){
            printf("%d ",i);
        }
    }
    printf("\n");



    return 0;
}
