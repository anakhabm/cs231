   
    //ANAKHA BM
    //ROLL_NO:6


#include<stdio.h>
#include<stdlib.h>

void main()
{
    int arr[40],top1=0,top2=40,cho,i;

    do
    {
        
        printf("\nMENU\n\nSTACK 1        STACK 2");
                printf("\n1.PUSH         4.PUSH");
                printf("\n2.POP          5.POP");   
                printf("\n3.DISPLAY      6.DISPLAY");
                printf("\n         7.EXIT");
                printf("\nEnter Choice: ");
        scanf("%d",&cho);

        if(cho==1)
        {
            top1=top1+1;
            printf("enter the element: ");
            scanf("%d",&arr[top1]);
            printf("element pushed!!!");
        }
        else if(cho==2)
        {
            if(top1==0)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",arr[top1]);
                arr[top1]=NULL;
                top1-=1;
            }
        }
        else if(cho==3)
        {
            printf("elements: ");
            for(i=top1;i>0;i--)
            {
                printf("%d |->",arr[i]);
            }
            printf("NULL");

        }
        

        else if(cho==4)
        {
            top2=top2-1;
            printf("enter the element: ");
            scanf("%d",&arr[top2]);
            printf("element pushed!!!");
        }
        else if(cho==5)
        {
            if(top2==40)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",arr[top2]);
                arr[top2]=NULL;
                top2+=1;
            }
        }
        else if(cho==6)
        {
            printf("elements: ");
            for(i=top2;i<40;i++)
            {
                printf("%d |->",arr[i]);
            }
            printf("NULL");

        }
        
    }while(cho==1 || cho==2 || cho==3 || cho==4 ||cho==5 || cho==6);
    
}
OUTPUT:


    We can push a total of 50 values
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :1

    enter data :4
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :1

    enter data :4
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :2

    enter data :5
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :2

    enter data :6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :5
    stack 1:
    4 4
    stack 2:
    5 6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :3
    0 is being popped from Stack 1
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :5
    stack 1:
    4
    stack 2:
    5 6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :6
              
