#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *top = NULL;

/* Add at top */
void add() {
    struct student *n;
    n = (struct student*)malloc(sizeof(struct student));

    printf("Enter ID Maths Science: ");
    scanf("%d%d%d", &n->id, &n->Maths, &n->Science);

    n->next = top;
    top = n;
}

/* Remove from bottom */
void removeQ() {
    struct student *t = top, *p = NULL;

    if (top == NULL) {
        printf("Queue is empty\n");
        return;
    }

    if (top->next == NULL) {
        printf("Removed: ID=%d\n", top->id);
        free(top);
        top = NULL;
        return;
    }

    while (t->next) {
        p = t;
        t = t->next;
    }

    printf("Removed: ID=%d\n", t->id);
    p->next = NULL;
    free(t);
}

/* Display from top to bottom */
void display() {
    struct student *t = top;
    if (!t) {
        printf("Queue is empty\n");
        return;
    }
    while (t) {
        printf("ID:%d Maths:%d Science:%d\n",
               t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Add\n2.Remove\n3.Display\n4.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) add();
        else if (ch == 2) removeQ();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
