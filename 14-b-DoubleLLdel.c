           //ANAKHA BM
          //ROLL_NO:6

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
    	struct node *llink,*rlink;
};
void main()
{
    	int key,x,c,l,n;
    	struct node *head,*temp,*ptr,*ptr1,*ptr2;
    	head=(struct node*)malloc(sizeof(struct node));
    	head->data=0;
    	head->llink=NULL;
    	head->rlink=NULL;
	do
    	{
        	ptr=head;
        	printf("\nMENU\n4.Deletion(begin)\n5.Deletion(end)\n6.Deletion(key)\n7.Search\n8.Display\nEnter choice:");
        	scanf("%d",&c);

            
          
            
                		

		if(c==4)
		{
			ptr=head->rlink;
			ptr1=ptr->rlink;
			head->rlink=ptr1;
			ptr1->llink=head;
		}
		else if(c==5)
		{
			while(ptr->rlink!=NULL)
            		{
				ptr1=ptr;
                		ptr=ptr->rlink;
            		}
			ptr1->rlink=NULL;
		}	
        	else if(c==6)
        	{
            		if(ptr->rlink==NULL)
            		{
                		printf("List is empty!!!");
            		}
            		else
            		{
                		printf("Enter key: ");
                		scanf("%d",&key);
                		l=0;
                		while(ptr->rlink!=NULL)
                		{
                    			ptr1=ptr;
                    			ptr=ptr->rlink;
                    			ptr2=ptr->rlink;
                    			if(ptr->data==key)
                    			{
                        			if(ptr->rlink==NULL)
                       			 	{
                            				ptr1=ptr->llink;
                            				ptr1->rlink=NULL;
                            				free(ptr);
                            				l+=1;    

                        			}
                        			else
                        			{
                            				ptr1=ptr->llink;
                            				ptr2=ptr->rlink;
                            				ptr1->rlink=ptr2;
                            				ptr2->llink=ptr1;
                            				free(ptr);
                            				l+=1;
                        			}
                    			}
                		}
                		if(l==0)
                		{
                    			printf("Key not found!!!");
                		}
            		}
        	}
        	else if(c==7)
        	{
			ptr=head;
			n=0;
            		if(ptr->rlink==NULL)
            		{
                		printf("Empty list!!!");
            		}
            		else
            		{
                		ptr=ptr->rlink;
                		l=0;
                		printf("Enter key: ");
                		scanf("%d",&key);
                		while(ptr!=NULL)
                		{
					n=n+1;
                    			if(ptr->data==key)
                    			{
                        			printf("\nElement found at %d",n);
                        			l+=1;
						break;
                    			}
                    			ptr=ptr->rlink;
                		}
                		if(l==0)
                		{
                    			printf("\nElement not found...");
                		}
            		}
        	}
        	else if(c==8)
        	{
            		ptr=ptr->rlink;
            		while(ptr!=NULL)
            		{
                		printf("%d -> ",ptr->data);
                		ptr=ptr->rlink;
            		}
            		printf("NULL");
        	}
    	}while(c==1 || c==2 || cc==4 || c==5 || c==6 || c==7 || c==8);
}
