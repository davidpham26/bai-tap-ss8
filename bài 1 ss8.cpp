#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5; // So luong phan tu cua mang

    // In mang tu cuoi ve dau
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
