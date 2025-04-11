
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t,j,n;
   unsigned long long f1,f2,fn;
   printf("Nhap vao so nguyen duong n: ");
        scanf("%d",&n);
        if((n==1)||(n==2)){
            printf("1\n");
        }
        else
        {
            f1=1;f2=1;
            for(j=3;j<=n;j++)
            {
              fn=f1+f2;
              f1=f2;
              f2=fn;
            }
            printf("So hang thu %d cua day Fibonaci la: %llu\n",n,fn);
        }

    return 0;
}
