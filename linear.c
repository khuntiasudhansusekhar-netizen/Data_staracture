#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,item,found=0;int a[n];
    
    printf("\n Enter number of element :");
    scanf("%d",&n);
    printf("\n Enter %d element \n ",n);
    for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element of search");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i] == item);
        {
            printf("\n Element found at position found =1 %d \n",i+1);
            break;

        }
    }
    if(! found)
    {
        printf("Element not found \n");

    }
    return 0;

}

