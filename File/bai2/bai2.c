#include <stdio.h>
#include <stdlib.h>

void docMaTranTuFile(int a[100][100], int b[100][100], int *n, int *p, int *m) {
    int i, j;
    FILE *f = fopen("TICH_MT.C", "r");
    if (f == NULL) {
        printf("Khong the mo tep\n");
        return;
    }

    fscanf(f, "%d %d %d", n, p, m);

    for (i = 0; i < *n; i++) {
        for (j = 0; j < *p; j++) {
            fscanf(f, "%d", &a[i][j]);
        }
    }

    for (i = 0; i < *p; i++) {
        for (j = 0; j < *m; j++) {
            fscanf(f, "%d", &b[i][j]);
        }
    }

    fclose(f);
}

void ghiMaTranVaoFile(int c[100][100], int n, int p) {
    FILE *f = fopen("TICH_MT.C", "a");
    if (f == NULL) {
        printf("Khong the mo file\n");
        return;
    }

    fprintf(f, "\nMa tran ket qua:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            fprintf(f, "%5d", c[i][j]);
        }
        fprintf(f, "\n");
    }

    printf("Da luu ket qua vao file TICH_MT.C\n");
    fclose(f);
}

int main() {
    int n, m, p;
    int a[100][100], b[100][100], c[100][100] = {0};
    docMaTranTuFile(a, b, &n, &p, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = 0;
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    ghiMaTranVaoFile(c, n, m);
    return 0;
}
