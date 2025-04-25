#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void menu()
{
    printf("1.Tao danh sach diem thi\n");
    printf("2.Hien thi danh sach ra man hinh\n");
    printf("3.Sap xep danh sach\n");
    printf("4.Thoat\n");
}
typedef struct
{
    char sbd[100];
    char hoTen[100];
    float toan;
    float ly;
    float ta;
    float tong;
} SV;

typedef struct Node
{
    SV sv;
    struct Node* next;

} Node;
typedef struct
{
    Node *first;
    Node *last;

} LinkedList;
Node *prev_Node;
LinkedList *createLinkedlist()
{
    LinkedList *list=(LinkedList*)malloc(sizeof(LinkedList));
    list->first=NULL;
    list->last=NULL;
    return list;
}

Node *createNode(SV sinhvien)
{
    Node* node=(Node*)malloc(sizeof(Node));
    node->sv=sinhvien;
    node->next=NULL;
    return node;
}

void insertNode(LinkedList *list,Node *node)
{
    if(list->first==NULL && list->last==NULL)
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
void taoDanhSach(LinkedList *list)
{
    SV sv;
    int n;
    printf("Nhap vao so hoc sinh muon tao danh sach diem thi: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Nhap vao thong tin cua hoc sinh thu %d: \n",i+1);
        printf("SBD: ");
        fflush(stdin);
        gets(&sv.sbd);
        printf("Ho Ten: ");
        gets(&sv.hoTen);
        printf("Diem Toan: ");
        scanf("%f",&sv.toan);
        printf("Diem Ly: ");
        scanf("%f",&sv.ly);
        printf("Diem Tieng Anh: ");
        scanf("%f",&sv.ta);
        Node *node=createNode(sv);
        insertNode(list,node);
    }
}

void hienThiDanhSach(LinkedList *list)
{
    printf("\t\t DANH SACH DIEM THI THPT\n");
    printf("%-5s %-10s %-30s %-10s %-10s %-10s %-10s\n","STT","SBD","Ho Ten","Diem Toan","Diem Ly","Diem TA","Tong");
    Node*node=list->first;
    int n=1;
    if(list->first==NULL)
    {
        printf("danh sach rong\n");
        return;
    }

    while(node != NULL)
    {
        node->sv.tong=node->sv.toan+node->sv.ly+node->sv.ta;
        printf("%-5d %-10s %-30s %-10.2f %-10.2f %-10.2f %-10.2f\n",n,node->sv.sbd,node->sv.hoTen,node->sv.toan,node->sv.ly,node->sv.ta,node->sv.tong);
        node=node->next;
        n++;
    }
}
void doiCho(SV *a,SV *b)
{
    SV tempt=*a;
    *a=*b;
    *b=tempt;
}
void sapXep(LinkedList *list)
{
   SV siv[100];
   Node *node1=list->first;
   int n =0;
   while(node1!=NULL)
   {
       siv[n]=node1->sv;
       node1=node1->next;
       n++;
   }
   printf("1.Sap xep tang dan theo diem toan\n");
   printf("2.Sap xep tang dan theo diem ly\n");
   printf("3.Sap xep tang dan theo diem tieng anh\n");
   printf("4.Sap xep tang dan theo diem tong\n");
   int u;
   printf("Dua ra lua chon: ");
   scanf("%d",&u);
   switch(u)
   {
   case 1:
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(siv[j].toan<siv[j+1].toan){
                    doiCho(&siv[j],&siv[j+1]);
                }
            }
        }
        Node *node2=list->first;
        int m=0;
        while(node2!=NULL)
        {
            node2->sv=siv[m];
            node2=node2->next;
            m++;
        }
        printf("Da sap xep theo diem toan thanh cong\n");
        break;
    }
    case 2:
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(siv[j].ly<siv[j+1].ly){
                    doiCho(&siv[j],&siv[j+1]);
                }
            }
        }
        Node *node2=list->first;
        int m=0;
        while(node2!=NULL)
        {
            node2->sv=siv[m];
            node2=node2->next;
            m++;
        }
                printf("Da sap xep theo diem ly thanh cong\n");

        break;
    }
    case 3:
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(siv[j].ta<siv[j+1].ta){
                    doiCho(&siv[j],&siv[j+1]);
                }
            }
        }
        Node *node2=list->first;
        int m=0;
        while(node2!=NULL)
        {
            node2->sv=siv[m];
            node2=node2->next;
            m++;
        }
                printf("Da sap xep theo diem tieng anh thanh cong\n");

        break;
    }
    case 4:
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(siv[j].tong<siv[j+1].tong){
                    doiCho(&siv[j],&siv[j+1]);
                }
            }
        }
        Node *node2=list->first;
        int m=0;
        while(node2!=NULL)
        {
            node2->sv=siv[m];
            node2=node2->next;
            m++;
        }
                printf("Da sap xep theo diem tong thanh cong\n");

        break;
    }
   }
}
int main()
{
    LinkedList *list=createLinkedlist();
    int x=1;
    while(x)
    {
        menu();
        int luaChon;
        printf("Moi dua ra lua chon: ");
            scanf("%d",&luaChon);
        switch(luaChon)
        {
        case 1:
        {
            taoDanhSach(list);
            break;
        }
        case 2:
        {
            hienThiDanhSach(list);
            break;
        }
        case 3:
        {
            sapXep(list);
            break;
        }
        case 4:
        {
            x=0;
            break;
        }
        default:
        {
            printf("Lua chon khong hop le. Vui long nhap lai\n");
            break;
        }
        }
    }
    return 0;
}
