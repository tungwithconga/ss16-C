#include <stdio.h>
void update(int *arr, int n, int val, int pos) {
    if (pos >= 0 && pos < n) {
        *(arr + pos) = val;
    } else {
        printf("Vi tri khong hop le.\n");
    }
}
void print(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));
    }
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Mang truoc cap nhat:\n");
    print(a, n);

    int val = 10;
    int pos = 2;
    update(a, n, val, pos);

    printf("Mang sau cap nhat:\n");
    print(a, n);

    return 0;
}

