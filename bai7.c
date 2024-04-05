#include <stdio.h>

int main() {
  int num;

  // Nhập số nguyên từ bàn phím
  printf("Nhập số nguyên: ");
  scanf("%d", &num);

  // Kiểm tra bit thứ 5
    num |=(1<<4);
    printf("Kết quả: %d\n", num);

  return 0;
}
