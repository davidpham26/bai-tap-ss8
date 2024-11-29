#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang 2 chieu
    int a[3][3] = {
        {1, 5, 3},
        {7, 2, 8},
        {4, 6, 9}
    };
    int max = a[0][0]; // Khoi tao max la phan tu dau tien

    // Tim phan tu lon nhat
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    // In ket qua
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
