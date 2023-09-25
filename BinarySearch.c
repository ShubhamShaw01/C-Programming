// BINARY SEARCH IN ITERATION AND RECURSIVE CALL
#include <stdio.h>
#include <stdlib.h>
#define max 20
int a[max];
int bsearch_ite(int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] < key)
            low = mid + 1;
        else if (a[mid] == key)
            return mid;
        else
            high = mid - 1;
    }
    return -1;
}
int bsearch_rec(int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key)
        return mid;
    else if (a[mid] < key)
        return bsearch_rec(mid + 1, high, key);
    else
        return bsearch_rec(low, mid - 1, key);
}
int main()
{
    int i, key, n, c, result;
    printf("\nEnter how many numbers you want to insert: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the element at position %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    printf("Enter 1 for iteration and 2 for recursion and 3 to exit: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        result = bsearch_ite(0, n - 1, key);
        if (result == -1)
            printf("\nElement is not in the array\n");
        else
            printf("\nThe position of the element %d is %d\n", key, result);
        break;
    case 2:
        result = bsearch_rec(0, n - 1, key);
        if (result == -1)
            printf("\nElement is not in the array\n");
        else
            printf("\nThe position of the element %d is %d\n", key, result);
        break;
    case 3:
        exit(0);
    default:
        break;
    }
    return 0;
}