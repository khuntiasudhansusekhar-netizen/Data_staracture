#include<stdio.h>
#include<conio.h>
#define MAX 20
int main()
{
    int arr[MAX],i,j,k,n,temp,smallest;
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
        /*selection sort */
        
    // Selection sort logic
    for (i = 0; i < n - 1; i++) {
        smallest = i;  // assume the first element is the smallest
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j; // update index of minimum element
            }
        }
        // swap arr[i] and arr[minIndex]
        if(i!=smallest){
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    
                       }
        
          printf("After pass element %d are\n:", i+1);
          for(j=0;j<n;j++)
           {
              printf("%d",arr[j]);
              printf("\n");
            }
    }
    /*End of for loop*/
    printf("sorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
