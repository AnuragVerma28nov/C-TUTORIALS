#include <stdio.h>
int main()
{
    int n, insertcount, i, element, j;
    int choice = 0;
    printf("Enter the size of Queue: ");
    scanf("%d", &n);
    int queue[n];
    int front = -1, rear = -1;
    while (1)
    {
        printf("\nQueue Implementation: \n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display (Traversing)\n");
        printf("4.Exit\n");
        printf("Entey your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            if (rear == n - 1)
            {
                printf("Queue is full-cannot insert.\n");
            }
            else
            {
                if (front == -1)
                    front = 0;
                printf("Enter the number of elements to inset: ");
                scanf("%d", &insertcount);
                for (i = 0; i < insertcount; i++)
                {
                    if (rear == n - 1)
                    {
                        printf("Queue is full.Cannot insert more elements.\n");
                        break;
                    }
                    printf("Enter %d element no. ", i + 1);
                    scanf("%d", &element);
                    queue[++rear] = element;
                }
                printf("Current queue after insertions: ");
                for (j = front; j <= rear; j++)
                {

                    printf("%d", queue[j]);
                }
                printf("\n");
            }
            break;
        }
        case 2:
        {
            if (front == -1 || front > rear)
            {
                printf("Queue is empty cannot delete.\n");
            }
            else
            {
                printf("Deleted %d\n", queue[front + 1]);
                if (front > rear)
                {
                    front = rear = -1;
                }
                printf("Current queue after deletion: ");
                for (j = front; j <= rear; j++)
                {
                    printf("%d", queue[j]);
                }
                printf("\n");
            }
            break;
        }
        case 3:
            if (front == -1)
            {
                printf("Queue is empty.\n");
            }
            else
            {
                printf("Queue elements are: ");
                for (i = front; i <= rear; i++)
                {
                    printf("%d\t", queue[i]);
                }
                printf("\n");
                break;
            }
        case 4:
        {
            printf(" Exiting...\n");
            return 0;
        }
        default:
        {
            printf("Invalid choice.Please try again\n ");
            break;
        }
        }
    }
    return 0;
}
