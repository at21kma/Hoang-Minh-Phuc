#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    printf("Nhap vao so bat ky: ");
    scanf("%lf",&n);
    printf("x^2 = %lf\n",pow(n,2));
    printf("x^3 = %lf\n",pow(n,3));
    printf("x^4 = %lf\n",pow(n,4));
    return 0;
}
