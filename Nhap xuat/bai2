#include <stdio.h>
#include <stdlib.h>
int kt_nam_nhuan(int y)
{
    int nhuan=0;
    if(y%400==0 || y%100!=0 && y%4==0){
        nhuan=1;
    }
    return nhuan;
}
int max_day(int d,int m,int y)
{
    int maxday;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        maxday=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxday=30;
        break;
    case 2:
        maxday=kt_nam_nhuan(y)==0?28:29;
        break;

    }
    return maxday;
}
int kiem_tra_ngay_thang(int d,int m,int y)
{
    if(y>0){
        int nhuan=kt_nam_nhuan(y);
        int max=max_day(d,m,y);
        if(0<m&&m<=12){
            if(d>0&&d<=max){
                return 1;
            }
        }
        else{
            return 0;
        }


    }
    else{
        return 0;
    }
}
int main()
{
    int d,m,y;

    while(1){
    printf("Nhap vao ngay thang nam:\n");
    scanf("%d %d %d",&d,&m,&y);
    if (kiem_tra_ngay_thang(d,m,y)==1){
        printf("%02d/%02d/%04d\n",d,m,y);
        break;
    }
    else{
        printf("Ngay thang nam khong hop le, vui long nhap lai.\n");
    }
    }
    return 0;
}
