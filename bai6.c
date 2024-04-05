#include <stdio.h>

int main() {
  int num;

  // Nhập số nguyên từ bàn phím
  printf("Nhập số nguyên: ");
  scanf("%d", &num);

  // Kiểm tra bit thứ 3
  if ((num & (1 << 2)) == 0) {
    printf("Bit thứ 3 là bit 0.\n");
  } else {
    printf("Bit thứ 3 là bit 1.\n");
  }

  return 0;
}
