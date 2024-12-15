#include <stdio.h>

int findElement(int *arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == value) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int a[] = {5, 10, 15, 20, 25};
    int n = sizeof(a) / sizeof(a[0]);

    int value = 15;
    int pos = findElement(a, n, value);

    if (pos != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", value, pos);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", value);
    }

    return 0;
}

