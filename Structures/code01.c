#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *temp, *newnode;
    int id;

    while (1) {
        printf("Enter ID (-1 to stop): ");
        scanf("%d", &id);
        if (id == -1) break;

        newnode = (struct student*)malloc(sizeof(struct student));
        newnode->id = id;

        printf("Enter Maths mark: ");
        scanf("%d", &newnode->Maths);
        printf("Enter Science mark: ");
        scanf("%d", &newnode->Science);

        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\n--- Student Details ---\n");
    temp = head;
    while (temp) {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
