#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,y,k=0;
    while(k==0)
    {
        printf("Nhap vao thang va nam : \n");
        scanf("%d %d",&m,&y);
        if(m>0 && m<=12 && y>0)
        {
            k=1;
        }
        else
        {
            printf("Khong hop le, hay nhap lai thang va nam\n");
        }
    }
    int nhuan;
    if(y%400==0 || y%100!=0 && y%4==0)
    {
        nhuan=1;
    }
    else
    {
        nhuan=0;
    }
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d nam %d co: 31 ngay",m,y);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang %d nam %d co: 30 ngay",m,y);
        break;
    case 2:
        if(nhuan==1)
        {
            printf("Thang %d nam %d co: 29 ngay",m,y);
        }
        else
        {
            printf("Thang %d nam %d co: 28 ngay",m,y);

        }
        break;
    }


    return 0;
}
