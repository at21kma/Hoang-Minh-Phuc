#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gdp;
    printf("Nhap vao GDP cua nam 2014 cua Viet Nam: \n");
    scanf("%lf",&gdp);
    double r;
    printf("Nhap vao toc do tang truong (%%): \n");
    scanf("%lf",&r);
    double gdp1=gdp;
    int y=2015;
    printf("Nam          GDP\n");
    printf("2014          %.3lf\n",gdp);
    do{
       gdp1=gdp1*(1+r/100);
       printf("%d          %.3lf\n",y++,gdp1);
    }while(gdp1<=2*gdp);

    return 0;
}
