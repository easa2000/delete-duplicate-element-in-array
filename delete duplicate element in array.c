// program which deletes all duplicate elements from the program


#include<stdio.h>
void main()
{
    int a[20],i,j,k=0,size,c;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);

    printf("\n Enter the elements: ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        if(a[i] != -1)
        {
            for (j=i+1; j < size; j++)
            {
                if(a[i] == a[j])
                {
                    a[i] = -1;
                    c++;  // increment of duplicate element
                }
            }
            
        }

        if(a[i] != -1)
        {
            a[k++]  = a[i];
        }
    }
    printf("\n the element after deleting the duplicates in array: ");
    for(i=0;i<size-c;i++)
    {
        printf("%d ",a[i]);
    }

}
