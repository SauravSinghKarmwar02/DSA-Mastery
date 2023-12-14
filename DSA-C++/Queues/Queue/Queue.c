#include<stdio.h>

#define MAX_SIZE 3

int queue[MAX_SIZE];
int front = -1, rear = -1;

int main() {
    int choice, item;

    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(rear == MAX_SIZE - 1) {
                    printf("\nOverflow & Exit!!\n");
                }
                else {
                    printf("\nEnter the element: ");
                    scanf("%d", &item);

                    if(front == -1) {
                        front = rear = 0;
                    }
                    else {
                        rear++;
                    }
                    queue[rear] = item;
                    printf("\nItem Inserted.\n");
                }
                break;
            case 2:
                if(front == -1) {
                    printf("\nUnderflow & Exit!!\n");
                }
                else {
                    item = queue[front];

                    if(front == rear) {
                        front = rear = -1;
                    }
                    else {
                        front++;
                    }
                    printf("\nItem Deleted.\n");
                }
                break;
            case 3:
                if(front == -1) {
                    printf("\nQueue is empty.\n");
                }
                else {
                    printf("Queue elements: ");

                    for(int i=front; i<=rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("\nExit\n");
                return 0;
            default:
                printf("\nInvalid Choice.\n");
        }
    }
    printf("\n");
}