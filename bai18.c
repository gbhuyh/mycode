#include <stdio.h>

int main() {
    int soTuNhien, i;

    // Bước 1: Nhập số tự nhiên từ bàn phím
    printf("Nhap so tu nhien: ");
    scanf("%d", &soTuNhien);

    // Bước 2: Hiển thị tất cả các số chẵn từ 1 đến số đã nhập
    printf("Cac so chan tu 1 den %d la:\n", soTuNhien);
    for (i = 1; i <= soTuNhien; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
