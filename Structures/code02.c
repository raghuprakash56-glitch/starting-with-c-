#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *head = NULL;

/* Create 5 sample nodes */
void create() {
    int i;
    struct student *temp, *newnode;
    for(i = 1; i <= 5; i++) {
        newnode = (struct student*)malloc(sizeof(struct student));
        newnode->id = i;
        newnode->Maths = 50 + i;
        newnode->Science = 60 + i;
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

/* Insert before or after a given ID */
void insert() {
    int key, choice;
    struct student *newnode, *temp = head, *prev = NULL;

    newnode = (struct student*)malloc(sizeof(struct student));
    printf("Enter ID, Maths, Science: ");
    scanf("%d%d%d", &newnode->id, &newnode->Maths, &newnode->Science);

    printf("1.Before ID  2.After ID: ");
    scanf("%d", &choice);
    printf("Enter target ID: ");
    scanf("%d", &key);

    while(temp && temp->id != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("ID not found!\n");
        free(newnode);
        return;
    }

    if(choice == 1) {  // Before
        newnode->next = temp;
        if(prev == NULL) head = newnode;
        else prev->next = newnode;
    } 
    else {             // After
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

/* Display list */
void display() {
    struct student *temp = head;
    while(temp) {
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    int ch;
    create();

    while(1) {
        printf("\n1.Insert Entry\n2.Display List\n3.Exit\nChoice: ");
        scanf("%d", &ch);

        if(ch == 1) insert();
        else if(ch == 2) display();
        else break;
    }
    return 0;
}
