#include <stdio.h>
#include <stdlib.h>

void nhap_ma_tran(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void in_ma_tran(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void ghi_ma_tran_vao_tep(FILE *file, int a[100][100], int n, int m,char t) {
    fprintf(file,"Ma tran %c\n",t);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(file, "%d ", a[i][j]);
        }
        fprintf(file, "\n");
    }
}

int main() {
    int m, n;
    printf("Nhap vao so hang cua ma tran: \n");
    scanf("%d", &n);
    printf("Nhap vao so cot cua ma tran: \n");
    scanf("%d", &m);

    int a[100][100], b[100][100], c[100][100];

    printf("Tao ma tran 1: \n");
    nhap_ma_tran(a, n, m);
    printf("Tao ma tran 2: \n");
    nhap_ma_tran(b, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Tong cua hai ma tran la: \n");
    in_ma_tran(c, n, m);


    FILE *file = fopen("CONG_MT.C", "w");
    if (file == NULL) {
        printf("Khong the mo tep de ghi!\n");
        return 1;
    }
    ghi_ma_tran_vao_tep(file, a, n, m,'A');
    ghi_ma_tran_vao_tep(file, b, n, m,'B');
    ghi_ma_tran_vao_tep(file, c, n, m,'C');
    fclose(file);

    printf("Da luu ket qua vao tep 'CONG_MT.C'\n");

    return 0;
}
