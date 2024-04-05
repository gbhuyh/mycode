#include <stdio.h>

int main() {
  char name[50];
  int age;
  float salary;

  // Nhập thông tin từ bàn phím
  printf("Nhap ten: ");
  scanf("%s", & name);
  printf("Nhap tuoi: ");
  scanf("%d", &age);
  printf("Nhap luong: ");
  scanf("%f", &salary);

  // Hiển thị thông tin
  printf("\nThong tin cua ban:\n");
  printf("Ten: %s\n", name);
  printf("Tuoi: %d\n", age);
  printf("Luong: %.2f\n", salary);

  return 0;
}
