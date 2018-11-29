       //ANAKHA BM
      //ROLL_NO:6

#include<stdio.h>
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
        	printf("\nCHOOSE\n4.Deletion\n5.Search\n6.Display\nEnter choice:");
        	scanf("%d",&c);
		
        	 if(c==4)
        	{
            		if(ptr->link==NULL)
            		{
                		printf("List is empty!!!");
            		}
            		else
           	 	{
                		printf("Enter key: ");
                		scanf("%d",&key);
                		l=0;
                		while(ptr->link!=head)
                		{
                    			ptr1=ptr;
                    			ptr=ptr->link;
                    			if(ptr->data==key)
                    			{
                        			ptr1->link=ptr->link;
                        			free(ptr);
                        			l+=1;
                    			}
                		}
                		if(l==0)
                		{
                    			printf("Key not found!!!");
                		}
            		}
        	}
        	else if(c==5)
        	{
            		if(ptr->link==head)
            		{
                		printf("Empty list!!!");
            		}
            		ptr=ptr->link;
            		l=0;
			n=0;
            		printf("Enter key: ");
            		scanf("%d",&key);
            		while(ptr!=head)
            		{
				n=n+1;
                		if(ptr->data==key)
                		{
                    			printf("\nElement found at %d",n);
                    			l+=1;
                		}
                		ptr=ptr->link;
            		}
            		if(l==0)
            		{
                		printf("\nElement not found...");
            		}
        	}
        	else if(c==6)
        	{
            		ptr=head->link;
            		while(ptr->link!=head->link)
            		{
                		printf("%d   ",ptr->data);
                		ptr=ptr->link;
            		}
            		
        	}
    	}while( c==4 || c==5 || c==6);
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
