#include<stdio.h>
#include<conio.h>
#define MAX 20
int main()
{
    int arr[MAX],i,j,k,temp,n,xchange;
    printf("Enter the number of element :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);     
    }
    printf("unsorted list is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");    
    }
    /*Bubble sort arry*/
    for(i=0;i<n-1;i++)
    {
        xchange = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchange++;
            }/*End of if */
        }/*End of inner for of loop*/
       if(xchange == 0)/*if list is sorted*/
       break;
       printf("After pass element are:\n",i+1);
       for(k=0;k<n;k++)
       {
        printf("%d",arr[k]);
        printf("\n");
       } 
    }/*End of outer for loop */
    printf("sorted list is :\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}