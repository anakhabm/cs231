       
    //ANAKHA BM
    //ROLL_NO:6

#include<stdio.h>
 
int main()
{
    int arr[50],i,n,x,flag=0,first,last,mid;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter array element(ascending order)\n");
 
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
 
    printf("\nEnter the element to search:");
    scanf("%d",&x);
 
    first=0;
    last=n-1;
 
    while(first<=last)
    {
        mid=(first+last)/2;
 
        if(x==arr[mid]){
            flag=1;
            break;
        }
        else
            if(x>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    }
 
    if(flag==1)
        printf("\nElement found at position %d",mid+1);
    else
        printf("\nElement not found");
 
    return 0;
}

 output:
Enter size of array:2
Enter array elements:2
5
Enter element to be searched:5

 Element found at position: 2
    
