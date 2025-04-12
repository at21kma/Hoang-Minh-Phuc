#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void menu()
{
    printf("===============================\n");
    printf("Chon 1,2,3,4,5 de thao tac\n");
    printf("1. Nhap sinh vien\n");
    printf("2. Them sinh vien\n");
    printf("3. Xoa sinh vien\n");
    printf("4. In danh sach\n");
    printf("5. Thoat\n");
    printf("===============================\n");

}

typedef struct
{
    char Ho_ten[1000];
    int tuoi;
    float Diem_TB;
} SV;

typedef struct Node
{
    SV sinhvien;
    struct Node* next;
} Node;

typedef struct
{
    Node* first;
    Node* last;
} Linkedlist;
Node* prevNode;
void create_linkedlist(Linkedlist *list)
{
    list->first=NULL;
    list->last=NULL;
}

Node* createNode(SV *sv)
{
    Node* node=(Node*)malloc(sizeof(Node));
    node->sinhvien=*sv;
    node->next=NULL;
    return node;
}

void insertNode(Linkedlist *list,Node *node)
{
    if (list->last == NULL&&list->first == NULL)
    {
        list->first = node;
        list->last = node;
    }
    else
    {
        node->next =NULL;
        list->last->next = node;
        list->last = node;
    }
}

Node* searchNode(Linkedlist *list, char *st)
{
    prevNode=NULL;
    Node *node=list->first;
    while(node!=NULL)
    {
        if(strcmp(node->sinhvien.Ho_ten,st)==0)
        {
            return node;
        }
        prevNode=node;
        node=node->next;
    }
    return NULL;
}

void insertBefore(Linkedlist* list,Node *node,char *st)
{
    Node *found=searchNode(list,st);
    if(found!=NULL)
    {
        if(found==list->first){
            node->next=list->first;
            list->first=node;
        }
        else{
        prevNode->next=node;
        node->next=found;
        }
    }
    else
    {
        printf("Khong tim thay sinh vien co ten %s",st);
    }
}
void deleteNode(Linkedlist *list, char *st)
{
    Node *found=searchNode(list,st);
    if(found!= NULL)
    {
        if(list->first==found)
        {
            list->first=found->next;
            if(list->first==NULL)
            {
                list->last=NULL;
            }
        }
        else if(list->last==found)
        {
            prevNode->next =NULL;
            list->last=prevNode;
        }
        else
        {
            prevNode->next=found->next;
        }
        free(found);
    }
    else
    {
        printf("Khong tim thay sinh vien co ten %s",st);
    }
}
void nhapSV(SV *sv)
{
    printf("Nhap vao ten cua sinh vien: ");
    fgets(sv->Ho_ten,sizeof(sv->Ho_ten),stdin);
    sv->Ho_ten[strcspn(sv->Ho_ten,"\n")]='\0';
    printf("Nhap vao tuoi: ");
    scanf("%d",&sv->tuoi);
    printf("Nhap vap diem tb: ");
    scanf("%f",&sv->Diem_TB);
}

int main()
{
    Linkedlist *list=(Linkedlist*)malloc(sizeof(Linkedlist));
    create_linkedlist(list);
    int x=1;
    while(x)
    {
        menu();
        int luaChon;
        scanf("%d",&luaChon);
        getchar();
        switch(luaChon)
        {
        case 1:
        {
            SV sv;
            nhapSV(&sv);
            Node *node=createNode(&sv);
            insertNode(list,node);
            break;
        }
        case 2:
        {
            if(list->first==NULL){
                printf("Danh sach sinh vien rong. Hay them vao sinh vien moi: \n");
                SV sv;
                nhapSV(&sv);
                Node *node=createNode(&sv);
                insertNode(list,node);
            }
            else{
            printf("Nhap vao ten sinh vien: ");
            char *st=(char*)malloc(100*sizeof(char));
            fgets(st,100,stdin);
            st[strcspn(st,"\n")]='\0';
            Node* found=searchNode(list,st);
            if(found==NULL)
            {
                printf("Khong co sinh vien nay trong danh sach\n");
            }
            else
            {   printf("Nhap vao sinh vien muon them truoc sinh vien %s\n",st);
                SV sv;
                nhapSV(&sv);
                Node *node=createNode(&sv);
                insertBefore(list,node,st);
            }
            }
            break;
        }
        case 3:
        {
            if(list->first==NULL){
                printf("Danh sach sinh vien rong, khong co sinh vien nao can xoa\n");
            }
            else{
            printf("Nhap vao ten sinh vien muon xoa khoi danh sach: \n");
            char *st=(char*)malloc(100*sizeof(char));
            fgets(st,100,stdin);
            st[strcspn(st,"\n")]='\0';
            deleteNode(list,st);
            }
            break;

        }
        case 4:
        {
            if(list->first==NULL){
                printf("Danh sach sinh vien rong\n");
            }
            else{
            printf("%-5s %-28s%-10s%-s\n","STT","Ho Ten","Tuoi","Diem Trung Binh");
            int i=1;
            Node *node = list->first;
            while(node != NULL)
            {
                printf("%-5d %-28s%-10d%-.2f\n",i,node->sinhvien.Ho_ten,node->sinhvien.tuoi,node->sinhvien.Diem_TB);
                node= node->next;
                i++;
            }
            }
            break;

        }
        case 5:
        {
            x=0;
            break;
        }
        default:
        {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }
        }
    }

    return 0;
}
