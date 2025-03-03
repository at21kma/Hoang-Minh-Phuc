#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double dtb;
    int k=1;
    while(k==1)
    {
        printf("Nhap diem: ");
        scanf("%lf",&dtb);
        if(dtb>=0&& dtb<=10)
        {
            k=0;
        }
        else
        {
            printf("Diem khong hop le, nhap lai diem\n");
        }
    }
    printf("Xep loai: ");
    if(dtb<5)
    {
        printf("Yeu");
    }
    else if(dtb>=5 && dtb<7)
    {
        printf("TB");
    }
    else if(dtb>=7 && dtb<8)
    {
        printf("Kha");
    }
    else if(dtb>=8 && dtb<9)
    {
        printf("Gioi");
    }
    else if(dtb>=9)
    {
        printf("Xuat sac");
    }








    return 0;
}
