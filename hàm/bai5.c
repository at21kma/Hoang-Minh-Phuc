#include <stdio.h>
#include <stdlib.h>
void chuyen_doi_he_co_so(int n,int x)
{
    int r=n%x;
    if(n==0){
        return;
    }
    else{
        chuyen_doi_he_co_so(n/x,x);

        if(r>9&&r<=15){
            switch(r)
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;


            }


        }
         else{
                printf("%d",r);
            }

    }
}
int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: \n");
    scanf("%d",&n);
    chuyen_doi_he_co_so(n,2);
    printf("\n");
    chuyen_doi_he_co_so(n,8);
    printf("\n");
    chuyen_doi_he_co_so(n,16);
    printf("\n");
    return 0;
}
