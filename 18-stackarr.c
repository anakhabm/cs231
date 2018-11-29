
    
    //ANAKHA BM
    //ROLL_NO:6


#include <stdio.h>

int stack[100], n=100, top;

int push(int data) {
	if (top >= n-1) {
		printf("Stack overflow\n");
		return 0;
	} else {
		stack[++top] = data;
		return 1;
	}
}
int pop() {
	if (top == -1) {
		printf("Stack underflow\n");
		return 0;
	} else {
		printf("Popped element is %d\n", stack[top]);
		top--;
		return 1;
	}
}
int display() {
	int i;
	printf("\n\nStack contents\n");
	if (top == -1) {
		printf("Empty stack\n");
	} else {
		for (i=top; i>=0; i--) {
			printf("%d\n", stack[i]);
		}
	}
	printf("\n");
}
int main() {
	top = -1;
	char ans;
	int data;
	do {
		printf("\n\n\tStack Using array\n");
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice : ");
		scanf(" %c", &ans);
		switch (ans) {
			case '1':
				printf("Enter data to be pushed : ");
				scanf(" %d", &data);
				push(data);
				break;
			case '2':
				pop();
				break;
			case '3':
				display();
				break;
			default:
				printf("Invalid choice.\n");
		}
	} while (ans != '4');
}
	printf("\nThe popped element is %d",stack[top]);
					top--;
				}
				break;
			}
			case 3:
			{
				if(top>=0)
				{
					printf("\nThe elements in stack \n");
					for(i=top; i>=0; i--)
						printf("\n%d",stack[i]);
					printf("\nEnter Choice");
				}
				else
				{
					printf("\nThe stack is empty");
				}
				break;
			}
			case 4:
			{
				printf("\n\EXIT  ");
				exit();
			}
			default:
			{
				printf ("\nPlease Enter a Valid Choice");
			}

		}
	}while(c==1 || c==2 || c==3 || c==4);

   return 0;
}
	printf("\nThe popped element is %d",stack[top]);
					top--;
				}
				break;
			}
			case 3:
			{
				if(top>=0)
				{
					printf("\nThe elements in stack \n");
					for(i=top; i>=0; i--)
						printf("\n%d",stack[i]);
					printf("\nEnter Choice");
				}
				else
				{
					printf("\nThe stack is empty");
				}
				break;
			}
			case 4:
			{
				printf("\n\EXIT  ");
				exit();
			}
			default:
			{
				printf ("\nPlease Enter a Valid Choice");
			}

		}
	}while(c==1 || c==2 || c==3 || c==4);

   return 0;
}
OUTPUT:
	Enter the size of stack:3

	1.PUSH
	2.POP
	3.DISPLAY
	4.EXIT
	 Enter the Choice:1
	Enter a value to be pushed:4

	 Enter the Choice:1
	Enter a value to be pushed:5

	 Enter the Choice:1
	Enter a value to be pushed:6

	 Enter the Choice:2

	The popped element is 6
	 Enter the Choice:3

	The elements in stack

	5
	4
	 Enter the Choice:
	5
