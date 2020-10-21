// C program to implement iterative Binary Search 
#include <stdio.h> 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)                    //this is my edit
            return i;
    return -1;
}
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = search(arr, n , x);                  //this is my edit
    (result == -1) ? printf("Element is not present"
                            " in array") 
                   : printf("Element is present at "
                            "index %d", 
                            result); 
    return 0; 
} 
