#include<stdio.h>
       //ANAKHA BM
       //ROLL_NO:6



#include<stdlib.h>
struct node
{
   	int data;
	struct node *link;
};
void main()
{
    	int key,x,c,l,n;
    	struct node *head,*temp,*ptr,*ptr1;
    	head=(struct node*)malloc(sizeof(struct node));
    	head->data=0;
    	head->link=head;
	do
    	{
        	ptr=head;
        	printf("\nCHOOSE\n1.Insertion(begin)    \n2.Insertion(end)\n3.Insertion(after key)\n4.Deletion\n5.Search\n6.Display\nEnter choice:");
        	scanf("%d",&c);
		if(c==1)
		{
			ptr=head;
			temp=(struct node*)malloc(sizeof(struct node));
			temp->link=ptr->link;	
			ptr->link=temp;
            		printf("Enter data: ");
            		scanf("%d",&x);
            		temp->data=x;
		}
		else if(c==2)
        	{
        		while(ptr->link!=head)
            		{
                		ptr=ptr->link;
            		}
            		temp=(struct node*)malloc(sizeof(struct node));
            		ptr->link=temp;
            		printf("Enter data: ");
            		scanf("%d",&x);
            		temp->data=x;
            		temp->link=head;
        	}
        	else if(c==3)
        	{
            		printf("Enter key: ");
            		scanf("%d",&key);
            		ptr=ptr->link;
            		while(ptr!=head)
            		{
                		if(ptr->data==key)
                		{
                    			temp=(struct node*)malloc(sizeof(struct node));
                    			ptr1=ptr->link;
                    			ptr->link=temp;
                    			temp->link=ptr1;
                    			printf("Enter data: ");
                    			scanf("%d",&x);
                    			temp->data=x;
		                }
                		ptr=ptr->link;
            		}
        	}
        	
        	else if(c==4)
        	{
            		ptr=head->link;
            		while(ptr->link!=head->link)
            		{
                		printf("%d   ",ptr->data);
                		ptr=ptr->link;
            		}
            		
        	}
    	}while(c==1 || c==2 || c==3 || c==4);
}
output:
CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:1
Enter data: 2

CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:2
Enter data: 3

CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:3
Enter key: 2
Enter data: 4

CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:4
Enter key: 2

CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:5
Enter key: 3

Element found at 2
CHOOSE
1.Insertion(begin)
2.Insertion(end)
3.Insertion(after key)
4.Deletion
5.Search
6.Display
Enter choice:6
4   3   
