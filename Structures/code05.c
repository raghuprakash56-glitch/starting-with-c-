#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *top = NULL;

/* Push at top */
void push() {
    struct student *n;
    n = (struct student*)malloc(sizeof(struct student));

    printf("Enter ID Maths Science: ");
    scanf("%d%d%d", &n->id, &n->Maths, &n->Science);

    n->next = top;
    top = n;
}

/* Pop from top */
void pop() {
    struct student *t;
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    t = top;
    printf("Popped: ID=%d\n", t->id);
    top = top->next;
    free(t);
}

/* Display from top to bottom */
void display() {
    struct student *t = top;
    if (!t) {
        printf("Stack is empty\n");
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
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
