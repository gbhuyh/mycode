#include <stdio.h>

int main() {
    printf("Kích thước của kiểu dữ liệu char: %zu byte\n", sizeof(char));
    printf("Kích thước của kiểu dữ liệu int: %zu byte\n", sizeof(int));
    printf("Kích thước của kiểu dữ liệu long: %zu byte\n", sizeof(long));
    printf("Kích thước của kiểu dữ liệu long long: %zu byte\n", sizeof(long long));
    printf("Kích thước của kiểu dữ liệu float: %zu byte\n", sizeof(float));
    printf("Kích thước của kiểu dữ liệu double: %zu byte\n", sizeof(double));

    return 0;
}
