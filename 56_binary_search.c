#include <stdio.h>

#define SIZE 20

int main()
{
    int arr[SIZE], n, i, val, beg, end, mid, pos = -1;
    
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("\n Enter the elements: ");
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("\n Enter the value that has to be searched: ");
    scanf("%d", &val);
    
    beg = 0, end = n - 1;
    
    while(beg <= end)
    {
        mid = (beg + end) / 2;
        
        if(arr[mid] == val)
        {
            pos = mid;
            printf("\n %d is found at position %d", val, pos);
            break;
        }
        else if(arr[mid] > val)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    
    if(pos == -1)
        printf("\n %d does not exist in the array.", val);
    
    return 0;
}
