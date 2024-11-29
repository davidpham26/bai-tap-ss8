#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho ma tran vuong
    int a[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 111, 222},
        {33, 44, 55, 66}
    };
    int n = 4; 
	// Kich thuoc ma tran vuong
    int sum = 0;

    // In cac phan tu tren duong cheo chinh
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        sum += a[i][i];  // Cong d?n các ph?n t? trên ðý?ng chéo chính
        printf("%d ", a[i][i]);
    }

    // In tong
    printf("\nTong cac phan tu tren duong cheo chinh: %d\n", sum);

    return 0;
}

