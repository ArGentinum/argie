#include <stdio.h>

void bsort(int x, int *ptr) {
    int i, j, swap;
    for (i = 0; i < x - 1; ++i) {
        for (j = 0; j < x - i - 1; ++j) {
            if (ptr[j] > ptr[j + 1]) {
                swap = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = swap;
            }
        }
    }
}

void binsearch(int *p, int max, int key) {
    int left = 0, right = max - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (p[mid] == key) {
            printf("Element found at index: %d\n", mid);
            return;
        } else if (p[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Element not found\n");
}

int main() {
    int a[30], i, max, element;

    printf("Enter the max number of elements: ");
    scanf("%d", &max);

    printf("Enter the elements:\n");
    for (i = 0; i < max; ++i) {
        scanf("%d", &a[i]);
    }

    bsort(max, a);

    printf("Sorted array:\n");
    for (i = 0; i < max; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    binsearch(a, max, element);

    return 0;
}
