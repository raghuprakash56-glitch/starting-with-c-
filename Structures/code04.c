#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id, Maths, Science;
    struct student *next;
};

struct student *head = NULL;

/* Create 5 sample nodes */
void create() {
    struct student *t, *n;
    for(int i=1;i<=5;i++){
        n=(struct student*)malloc(sizeof(struct student));
        n->id=i; n->Maths=50+i; n->Science=60+i;
        n->prev=n->next=NULL;
        if(head==NULL) head=t=n;
        else { t->next=n; n->prev=t; t=n; }
    }
}

/* Insert before or after ID */
void insert() {
    int key,ch;
    struct student *n,*t=head;
    n=(struct student*)malloc(sizeof(struct student));

    printf("Enter ID Maths Science: ");
    scanf("%d%d%d",&n->id,&n->Maths,&n->Science);

    printf("1.Before  2.After : ");
    scanf("%d",&ch);
    printf("Enter target ID: ");
    scanf("%d",&key);

    while(t && t->id!=key) t=t->next;
    if(!t){ printf("ID not found\n"); free(n); return; }

    if(ch==1){
        n->next=t; n->prev=t->prev;
        if(t->prev) t->prev->next=n;
        else head=n;
        t->prev=n;
    } else {
        n->prev=t; n->next=t->next;
        if(t->next) t->next->prev=n;
        t->next=n;
    }
}

/* Delete by ID */
void delete() {
    int key;
    struct student *t=head;
    printf("Enter ID to delete: ");
    scanf("%d",&key);

    while(t && t->id!=key) t=t->next;
    if(!t){ printf("ID not found\n"); return; }

    if(t->prev) t->prev->next=t->next;
    else head=t->next;
    if(t->next) t->next->prev=t->prev;
    free(t);
    printf("Deleted successfully\n");
}

/* Display list */
void display() {
    struct student *t=head;
    while(t){
        printf("ID:%d Maths:%d Science:%d\n",
               t->id,t->Maths,t->Science);
        t=t->next;
    }
}

int main() {
    int ch;
    create();
    while(1){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) insert();
        else if(ch==2) delete();
        else if(ch==3) display();
        else break;
    }
    return 0;
}
