#include <stdio.h>

typedef struct {
    char tenHang[30];
    int donGia;
    int soLuong;
    int thanhTien;
} matHang;

int main() {
    int n, tongTien = 0;
    matHang ds[100];
    FILE *f;
    printf("Nhap so mat hang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap ten hang thu %d: ", i + 1);
        scanf("%s", ds[i].tenHang);
        printf("Nhap don gia: ");
        scanf("%d", &ds[i].donGia);
        printf("Nhap so luong: ");
        scanf("%d", &ds[i].soLuong);
        ds[i].thanhTien = ds[i].donGia * ds[i].soLuong;
        tongTien += ds[i].thanhTien;
    }
    f = fopen("SO_LIEU.C", "w");
    if (f == NULL) {
        printf("Khong mo duoc tep!\n");
        return 1;
    }
    fprintf(f, "%-5s %-15s %10s %10s %15s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%-5d %-15s %10d %10d %15d\n", i + 1, ds[i].tenHang, ds[i].donGia, ds[i].soLuong, ds[i].thanhTien);
    }
    fprintf(f, "\n%42s %d\n", "Tong tien =", tongTien);
    fclose(f);
    printf("\nNoi dung tep SO_LIEU.C\n");
    f = fopen("SO_LIEU.C", "r");
    if (f != NULL) {
        char ch;
        while ((ch = fgetc(f)) != EOF)
            putchar(ch);
        fclose(f);
    }
    return 0;
}
