#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include<string.h>
void menu()
{
    printf("1.Tao danh sach nhan vien\n");
    printf("2.Hien thi danh sach nhan vien\n");
    printf("3.Xoa nhan vien\n");
    printf("4.Thoat\n");
    printf("Moi dua ra lua chon: ");
}
typedef struct
{
    char ID[50];
    char hoTen[100];
    char chucVu[100];
    char sdt[12];
} NV;

typedef struct Node
{
    NV nhan_vien;
    struct Node*next;
} Node;
Node *prev_Node;
typedef struct
{
    Node *first;
    Node *last;
} Linkedlist;
Linkedlist* createLinkedList()
{
    Linkedlist *list=(Linkedlist*)malloc(sizeof(Linkedlist));
    list->first=NULL;
    list->last=NULL;
    return list;
}
Node* createNode(NV nv)
{
    Node *node=(Node*)malloc(sizeof(Node));
    node->nhan_vien=nv;
    node->next=NULL;
    return node;
}
void insertNode(Linkedlist *list,Node *node)
{
    if(list->last==NULL )
    {
        list->first=node;
        list->last=node;
    }
    else
    {
        node->next=NULL;
        list->last->next=node;
        list->last=node;
    }
}
Node *searchNode(Linkedlist *list,char id[100])
{
    prev_Node=NULL;
    Node *node=list->first;
    while(node!=NULL)
    {
        if(strcmp(node->nhan_vien.ID,id)==0)
        {
            return node;
        }
        else
        {
            prev_Node=node;
            node=node->next;
        }

    }
    return NULL;
}
void deleteNode(Linkedlist *list,char id[100])
{
    Node *found=searchNode(list,id);
    if(found!=NULL)
    {
         if(found==list->first)
        {
            list->first=found->next;
            if(list->first==NULL)
            {
                list->last=NULL;
            }
        }
        else if(found==list->last)
        {
            prev_Node->next=NULL;
            list->last=prev_Node;
        }
        else
        {
            prev_Node->next=found->next;
        }
        free(found);
        printf("Da xoa thanh cong nhan vien co id: %s\n",id);
        return;
    }
    else
    {
        printf("Khong tim thay sinh vien co id nay\n");
        return;
    }
}
void taoDanhSach(Linkedlist *list)
{
    NV nv;
    int n;
    printf("Nhap vao so luong nhan vien muon tao danh sach: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Nhap vao thong tin cua nhan vien thu %d: \n",i+1);
    printf("ID: ");
    fflush(stdin);
    gets(&nv.ID);
    printf("Ho Ten: ");
    gets(&nv.hoTen);
    printf("Chuc Vu: ");
    gets(&nv.chucVu);
    printf("SDT: ");
    gets(&nv.sdt);
    Node* node=createNode(nv);
    insertNode(list,node);
    }
}
void xoaNhanVien(Linkedlist *list)
{
    printf("Nhap vao id cua nhan vien muon xoa: ");
    char id[100];
    fflush(stdin);
    gets(id);
    deleteNode(list,id);
}
void hienThiDanhSachNhanVien(Linkedlist *list)
{
    printf("\t\tDANH SACH NHAN VIEN\n");
    printf("%15s  %-30s %-30s %-10s\n","ID","Ho Ten","Chuc Vu","So DT");
    Node *node=list->first;
    while(node!=NULL){
        printf("%15s  %-30s %-30s %-10s\n",node->nhan_vien.ID,node->nhan_vien.hoTen,node->nhan_vien.chucVu,node->nhan_vien.sdt);
        node=node->next;
    }
}
int main()
{
    int x=1;
    Linkedlist *list=createLinkedList();
    int luaChon;
    while(x){
        menu();
        scanf("%d",&luaChon);
        switch(luaChon)
        {
        case 1:{
            taoDanhSach(list);
            break;
        }
        case 2:{
            hienThiDanhSachNhanVien(list);
            break;
        }
        case 3:
         {
             xoaNhanVien(list);
             break;
         }
        case 4:
            {
                x=0;
                break;
            }
        default:
            {
                printf("Lua chon khong hop le. Vui long chon lai( tu 1 den 4).\n");
                break;
            }
    }
    }
    return 0;
}
