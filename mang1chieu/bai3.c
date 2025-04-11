#include <stdio.h>
#include <stdlib.h>

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
    int tong_duong=0,tong_am=0,tong=0;
    double tb=0,tb_duong=0,tb_am=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
        if(a[i]>0){
            tong_duong+=a[i];
            count1++;
        }
        else if(a[i]<0){
            tong_am+=a[i];
            count2 ++;
        }
    }
    tb=(double)tong/n;
    tb_duong=(count1>0)?(double)tong_duong/count1:0;
    tb_am=(count2)>0?(double)tong_am/count2:0;
    printf("Tong cua cac so trong mang la: %d\n",tong);
    printf("Trung binh cong cua cac so trong mang la: %lf\n",tb);
    printf("Tong cua cac so duong trong mang la: %d\n",tong_duong);
    printf("Trung binh cong cua cac so am trong mang la: %lf\n",tb_duong);
    printf("Tong cua cac so am trong mang la: %d\n",tong_am);
    printf("Trung binh cong cua cac so am trong mang la: %lf\n",tb_am);


    return 0;
}
