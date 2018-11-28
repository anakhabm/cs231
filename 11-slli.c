
      //ANAKHA BM
      //ROLL_NO:6



#include<stdio.h>

#include<stdlib.h>
struct node
{
int data;
struct node*ptr;
};

int main()
{
typedef struct node NODE;
NODE *start=NULL,*temp,*p,*t;
int ch,item,pos,i;

while(1)
{
printf("\nMENU: \n1.Insert at beginning\n2.Insert at particular position\n3.Insert at end\n4.Display\n5.Exit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the number: ");
scanf("%d",&item);
temp=(NODE*)malloc(sizeof(NODE));
temp->data=item;

if(start==NULL)
{
temp->ptr=NULL;
start=temp;
}
else
{
temp->ptr=start;
start=temp;
}
break;
case 2:
printf("\nEnter the number: ");
scanf("%d",&item);
temp=(NODE*)malloc(sizeof(NODE));
temp->data=item;
printf("\nEnter the position: ");
scanf("%d",&pos);
p=start;
for(i=1;i<pos-1;i++)
p=p->ptr;
temp->ptr=p->ptr;
p->ptr=temp;

break;
case 3:
printf("\nEnter the number: ");
scanf("%d",&item);
temp=(NODE*)malloc(sizeof(NODE));
temp->data=item;
temp->ptr=NULL;
if(start==NULL)
start=temp;
else
{
p=start;
while(p->ptr!=NULL)
p=p->ptr;
p->ptr=temp;
}
break;


case 4:
if(start==NULL)
printf("\nList is empty");
else
{
printf("\nElements are:");
for(p=start;p!=NULL;p=p->ptr)
printf(" %d",p->data);
}
break;
case 5:
exit(0);
defaut:
printf("\nWrong Choice");
break;
}

}
return 0;
}
