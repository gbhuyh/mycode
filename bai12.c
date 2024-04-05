#include <stdio.h>

int main() {
    int numbers[4];
    int i;

    // Nhập 4 số từ bàn phím
    for (i = 0; i < 4; ++i) {
        printf("Nhập số thứ %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // In ra bình phương của mỗi số
    printf("Bình phương của mỗi số:\n");
    for (i = 0; i < 4; ++i) {
        printf("%d^2 = %d\n", numbers[i], numbers[i] * numbers[i]);
    }

    return 0;
}
