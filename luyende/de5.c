#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void menu()
{
    printf("1.Tao danh sach\n");
    printf("2.Hien danh sach\n");
    printf("3.Sua thong tin sinh vien\n");
    printf("4.Thoat\n");
}
typedef struct
{
    char msv[50];
    char hoTen[80];
    int namSinh;
}SV;
void taoDanhSach()
{
    FILE *f=fopen("DS_SV.C","wb");
    if(f==NULL)
    {
        printf("Khong the mo tep de ghi\n");
        return;
    }
    SV sv;
    int n;
    printf("Nhap vao so luong sinh vien muon tao danh sach: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap vao thong tin sinh vien thu %d: \n",i+1);
        printf("MSV: ");
        fflush(stdin);
        gets(sv.msv);
        printf("Ho Ten: ");
        gets(sv.hoTen);
        printf("Nam sinh: ");
        scanf("%d",&sv.namSinh);
        fwrite(&sv,sizeof(SV),1,f);
    }
     fclose(f);
}
void hienDanhSach()
{
    FILE *f=fopen("DS_SV.C","rb");
    if(f==NULL)
    {
        printf("Khong the mo tep de doc\n");
        return;
    }
    SV sv[100];
    int n=0;
    while(fread(&sv[n],sizeof(SV),1,f))
    {
        n++;
    }
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("%-5s %-30s %-30s %-15s\n","STT","Ma SV","Ho Ten","Nam Sinh");
    for(int i=0;i<n;i++)
    {
        printf("%-5d %-30s %-30s %-15d\n",i+1,sv[i].msv,sv[i].hoTen,sv[i].namSinh);

    }
    fclose(f);
}
void suaThongTinSinhVien()
{
    FILE *f=fopen("DS_SV.C","rb");
    if(f==NULL){
        printf("Khong the mo tep\n");
        return;
    }
    SV sv[100];
    char masv[50];
    printf("Nhap vao ma sinh vien muon sua thong tin: ");
    fflush(stdin);
    gets(masv);
    int n=0;
    while(fread(&sv[n],sizeof(SV),1,f))
    {
        n++;
    }
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(sv[i].msv,masv)==0){
          found=1;
          printf("Nhap vao thong tin moi cua sinh vien co ma sinh vien %s:\n",masv);
          printf("Ho ten: ");
          fflush(stdin);
          gets(sv[i].hoTen);
          printf("Nam sinh: ");
          scanf("%d",&sv[i].namSinh);
        }
    }
    if(!found)
    {
        printf("Khong tim thay sinh vien co ma sinh vien %s\n",masv);
        return;
    }
    f=fopen("DS_SV.C","wb");
    if(f==NULL)
    {
        printf("Khong the mo file de ghi\n");
        return;
    }
    for(int i=0;i<n;i++){
        fwrite(&sv[i],sizeof(SV),1,f);
    }
    fclose(f);
    printf("Da cap nhat thanh cong\n");
}
int main()
{
    int x=1;
    while(x)
    {
      menu();
      int luaChon;
      printf("Dua ra lua chon cua ban: ");
      scanf("%d",&luaChon);
      switch(luaChon)
      {
      case 1:
        {
            taoDanhSach();
            break;

        }
      case 2:
          {
              hienDanhSach();
              break;
          }
      case 3:
        {
            suaThongTinSinhVien();
            break;
        }
      case 4:
        {
            x=0;
            break;
        }
      default:
        {
            printf("Lua chon khong hop le, vui long chon lai: \n");
            break;
        }
      }
    }

    return 0;
}
