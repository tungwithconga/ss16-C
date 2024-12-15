#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Gia tri cua x (dung bien): %d\n", x);
    printf("Dia chi cua x (dung bien): %p\n", (void*)&x);

    printf("Gia tri cua x (dung con tro): %d\n", *ptr);
    printf("Dia chi cua x (dung con tro): %p\n", (void*)ptr);

    return 0;
}

