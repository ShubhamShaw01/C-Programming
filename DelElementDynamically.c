//wap to del an element from array do it dynamically to save memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, element;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (ptr[i] == element) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                ptr[j] = ptr[j + 1];
            }
            break;
        }
    }
    
    if (found) {
        n--;
        ptr = (int *)realloc(ptr, n * sizeof(int));
        
        printf("The updated array is: \n");
        for (int i = 0; i < n; i++) {
            printf("%d\t", ptr[i]);
        }
    } else {
        printf("Element not found in the array.\n");
    }
    
    free(ptr);
    return 0;
}
