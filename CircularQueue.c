/*wap to print circular queue*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int cqueue[MAX];
int f = -1;
int r = -1;
void insertion() {
    int item;
    if ((f == 0 && r == MAX - 1) || (f == r + 1)) {
        printf("The circular queue is already full.\n");
    } else {
        printf("\nEnter the item to insert: ");
        scanf("%d", &item);
        if (f == -1) {
            f = 0;
        }
        r = (r + 1) % MAX;
        cqueue[r] = item;
        printf("Inserted item: %d\n", item);
    }
}

void deletion() {
    int item;
    if (f == -1) {
        printf("The circular queue is empty. Cannot dequeue.\n");
    } else {
        item = cqueue[f];
        printf("Deleted item: %d\n", item);
        if (f == r) {
            f = -1;
            r = -1;
        } else {
            f = (f + 1) % MAX;
        }
    }
}

void display() {
    int i;
    if (f == -1) {
        printf("The circular queue is empty.\n");
    } else {
        printf("Circular Queue elements: ");
        if (f <= r) {
            for (i = f; i <= r; i++) {
                printf("%d ", cqueue[i]);
            }
        } else {
            for (i = f; i < MAX; i++) {
                printf("%d ", cqueue[i]);
            }
            for (i = 0; i <= r; i++) {
                printf("%d ", cqueue[i]);
            }
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nCircular Queue Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
