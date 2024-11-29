#include <stdio.h>

int main() {
    // Khai bao mang
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5; // So luong phan tu
    int x, found = 0;

    // Nhap gia tri can tim
    printf("Nhap gia tri: ");
    scanf("%d", &x);

    // Tim kiem trong mang
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Vi tri: %d\n", i);
            found = 1;
            break;
        }
    }

    // Neu khong tim thay
    if (!found) {
        printf("Khong ton tai.\n");
    }

    return 0;
}
