#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void menu()
{
    printf("1.Nhap 2 day so\n");
    printf("2.Ghep 2 day so\n");
    printf("3.In 3 day so\n");
    printf("4.Thoat\n");
}
void nhapDaySo(int a[100],int *n)
{
    printf("Nhap vao kich thuoc cua day: ");
    scanf("%d",n);
    printf("Nhap vao cac so cua day: \n");
    for(int i=0;i<*n;i++)
    {
        scanf("%d",&a[i]);
    }

}
int *ghepHaiDaySo(int a[100],int b[100],int n,int m)
{
    int i=0,j=0,k=0;
    int *c=(int*)malloc((m+n)*sizeof(int));
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
    return c;
}
void inDaySo(int a[100],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int x=1;
    int a[100];
    int b[100];
    int *c=NULL;
    int n,m,k;
    while(x)
    {
        menu();
        int luaChon;
        printf("Dua ra lua chon: ");
        scanf("%d",&luaChon);
        switch(luaChon)
        {
        case 1:
            {
                printf("Tao day so 1: \n");
                nhapDaySo(a,&n);
                printf("Tao day so 2: \n");
                nhapDaySo(b,&m);
                break;
            }
        case 2:
            {
                c=ghepHaiDaySo(a,b,n,m);
                if (c == NULL) {
        printf("Loi khi ghep day so (khong du bo nho).\n");
    }
                break;
            }
        case 3:
            {
                printf("Day 1: ");
                inDaySo(a,n);
                printf("Day 2: ");
                inDaySo(b,m);
                printf("Day 3: ");
                inDaySo(c,m+n);
                break;
            }
        case 4:
            {
                x=0;
                break;
            }
        default:
            {
                printf("lua chon khong hop le\n");
                break;
            }
        }
    }

    return 0;
}
