#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char hoTen[50];
    int tuoi;
    float diemTB;
} sinhVien;

void ghiDanhSach(FILE *f, sinhVien sv[], int n) {
    fprintf(f, "%-5s %-25s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%-5d %-25s %-10d %-10.2f\n", i + 1, sv[i].hoTen, sv[i].tuoi, sv[i].diemTB);
    }
}

int main() {
    sinhVien sv[MAX];
    int n;
    FILE *f;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Nhap ho ten sinh vien thu %d: ", i + 1);
        fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);
        sv[i].hoTen[strcspn(sv[i].hoTen, "\n")] = 0;
        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].tuoi);
        printf("Nhap diem TB: ");
        scanf("%f", &sv[i].diemTB);
        getchar();
    }
    f = fopen("DSACH.C", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep\n");
        return 1;
    }
    ghiDanhSach(f, sv, n);
    fclose(f);
    printf("\nNoi dung file DSACH.C\n");
    f = fopen("DSACH.C", "r");
    if (f != NULL) {
        char ch;
        while ((ch = fgetc(f)) != EOF)
            putchar(ch);
        fclose(f);
    }
    char tenSua[50];
    printf("\nNhap ten sinh vien can sua diem TB: ");
    fgets(tenSua, sizeof(tenSua), stdin);
    tenSua[strcspn(tenSua, "\n")] = 0;
    int timThay = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].hoTen, tenSua) == 0) {
            printf("Nhap diem TB moi cho %s: ", tenSua);
            scanf("%f", &sv[i].diemTB);
            timThay = 1;
            break;
        }
    }
    if (!timThay) {
        printf("Khong tim thay sinh vien co ten \"%s\"\n", tenSua);
    }
	else {
        f = fopen("DSACH.C", "w");
        ghiDanhSach(f, sv, n);
        fclose(f);
        printf("\nFile sau khi cap nhat diem TB\n");
        f = fopen("DSACH.C", "r");
        if (f != NULL) {
            char ch;
            while ((ch = fgetc(f)) != EOF)
                putchar(ch);
            fclose(f);
        }
    }
    return 0;
}
