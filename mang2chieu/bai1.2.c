#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("Nhap vao so hang cua ma tran: \n");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran: \n");
    scanf("%d",&m);
    int a[100][100];
    int i,j;
    printf("Nhap vao cac thanh phan cua ma tran: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }




    return 0;
}
