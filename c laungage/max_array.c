#include <stdio.h>
int main()
{    
    int a,b, max,array[50];
    printf("Enter the number of elements in array\n");
    scanf("%d", &a);
    printf("Enter %d integers\n",b);
    for (b=0;b<a;b++)
        scanf("%d", &array[b]);
        
    max=array[0];
    for (b=1;b<a;b++)
    {
        if (array[b]>max)
        {
                max=array[b];
        }
    }
    printf("Maximum element is %d\n", max);  
}