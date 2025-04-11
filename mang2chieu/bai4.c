#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen n:\n");
    scanf("%d",&n);
    int a[100][100];
    int i,j;
    int v=0;
    int gt=1;
    while(gt<=n*n){
        for(j=v;j<n-v;j++){
            a[v][j]=gt++;
        }
        for(i=v+1;i<n-v;i++){
            a[i][n-v-1]=gt++;
        }
        for(j=n-2-v;j>=v;j--){
            a[n-1-v][j]=gt++;
        }
        for(i=n-2-v;i>=v+1;i--){
            a[i][v]=gt++;
        }
        v++;
    }
    printf("Ma tran duoc tao thanh la:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
