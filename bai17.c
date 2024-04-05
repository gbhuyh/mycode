#include <stdio.h>

#define LUONG_CO_BAN 12.00
#define LUONG_THEM_GIO (LUONG_CO_BAN * 1.5)
#define THUE_TYLE_1 0.15
#define THUE_TYLE_2 0.20
#define THUE_TYLE_3 0.25
#define GIO_LAM_VIEC_CHUAN 40

int main() {
    float gioLamViec, luongGross, thue, luongNet;

    // Nhập số giờ làm việc từ bàn phím
    printf("Nhap so gio lam viec hang tuan: ");
    scanf("%f", &gioLamViec);

    // Tính lương gross
    if (gioLamViec <= GIO_LAM_VIEC_CHUAN) {
        luongGross = gioLamViec * LUONG_CO_BAN;
    } else {
        luongGross = GIO_LAM_VIEC_CHUAN * LUONG_CO_BAN + (gioLamViec - GIO_LAM_VIEC_CHUAN) * LUONG_THEM_GIO;
    }

    // Tính thuế
    if (luongGross <= 300) {
        thue = luongGross * THUE_TYLE_1;
    } else if (luongGross <= 450) {
        thue = 300 * THUE_TYLE_1 + (luongGross - 300) * THUE_TYLE_2;
    } else {
        thue = 300 * THUE_TYLE_1 + 150 * THUE_TYLE_2 + (luongGross - 450) * THUE_TYLE_3;
    }

    // Tính lương net
    luongNet = luongGross - thue;

    // Hiển thị kết quả
    printf("Luong gross: $%.2f\n", luongGross);
    printf("Thue: $%.2f\n", thue);
    printf("Luong net: $%.2f\n", luongNet);

    return 0;
}
