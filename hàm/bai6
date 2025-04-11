#include <stdio.h>
#include <stdlib.h>
void nhap_da_thuc(double *a,int n)
{
    for(int i=0;i<=n;i++){
        printf("Nhap vao he so thu %d: ",i);
        scanf("%lf",a+i);
        printf("\n");
    }
}
void in_he_so_da_thuc(double *a,int n)
{
    for(int i=0;i<=n;i++){
        printf("%.2f ",*(a+i));
    }
    printf("\n");
}
double gt_da_thuc(double *a,int n,int x)
{
    double gt=0;
    for(int i=0;i<=n;i++){
        gt+=(*(a+i))*pow(x,i);
    }
    return gt;
}
int main()
{
    int n,m,p;
    printf("Nhap vao bac (bac >0) cua da thuc P(x): \n");
    scanf("%d",&n);
    double *px=(double*)malloc((n+1)*sizeof(double));
    printf("Nhap vao he so cua da thuc P(x): \n");
    nhap_da_thuc(px,n);

    printf("Nhap vao bac (bac >0) cua da thuc Q(x): \n");
    scanf("%d",&m);
    double *qx=(double*)malloc((m+1)*sizeof(double));
    printf("Nhap vao he so cua da thuc Q(x): \n");
    nhap_da_thuc(qx,m);

    double x;
    printf("Nhap vao gia tri cua x: \n");
    scanf("%lf",&x);

    int i=0,j=0,k=0;
    p=(m>=n)?m:n;
    double *tx=(double*)malloc((p+1)*sizeof(double));
    while(i<n+1 && k<m+1){
        tx[k++]=px[i++]+qx[j++];
    }
    while(i<n+1){
        tx[k++]=px[i++];
    }
    while(j<m+1){
        tx[k++]=qx[j++];
    }

    printf("He so cua da thuc P(x) la: ");
    in_he_so_da_thuc(px,n);
    printf("He so cua da thuc Q(x) la: ");
    in_he_so_da_thuc(qx,m);
    printf("He so cua da thuc T(x) = P(x) + Q(x) la: ");
    in_he_so_da_thuc(tx,p);

    printf("Gia tri cua x la: %.2lf\n",x);

    printf("P(%.2lf) = %.2lf \n",x,gt_da_thuc(px,n,x));
    printf("Q(%.2lf) = %.2lf \n",x,gt_da_thuc(qx,m,x));
    printf("T(%.2lf) = %.2lf \n",x,gt_da_thuc(tx,p,x));

    return 0;
}
