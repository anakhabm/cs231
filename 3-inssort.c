
       //ANAKHA BM
       //ROLL_NO:6



#include<stdio.h>
int main(){

   
   int i, j, count, temp, number[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
output:
enter the size of the array: 2
enter the elements of the array: 
2
3
the sorted array is: 
the sorted array is: 23
