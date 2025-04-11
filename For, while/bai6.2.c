#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Nhap vao 1 so: ");
   scanf("%d",&x);
   if(x<=0){
    printf("%d khong phai la so hoan hao",x);
   }
   else{
    int i,sum=0;
    for(i=1;i<=x/2;i++){
       if(x%i==0){
        sum+=i;
       }

    }
    if(sum==x){
        printf("%d la so hoan hao",x);
    }
    else{
        printf("%d khong phai la so hoan hao",x);

    }
   }
    return 0;
}
