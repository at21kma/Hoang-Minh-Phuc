#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double t;
    printf("Nhap vao so tien duoc gui tiet kiem theo lai suat 0.45%% moi thang: \n");
    scanf("%lf",&t);
    int n;
    printf("Nhap vao so thang nguoi do se rut tien sau khi gui tiet kiem: \n");
    scanf("%d",&n);
    double t1=t;
    double r=0.45/100;
    for(int i=0;i<n;i++){
        t1+=t1*r;
    }
    printf("Sau %d thang nguoi do rut duoc: %.2lf (dong)",n,t1);
    return 0;
}
