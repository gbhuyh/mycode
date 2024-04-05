#include <stdio.h>

void chuyen_doi_phut_sang_nam_ngay(int phut) {
    // Tính số ngày
    int so_ngay = phut / (60 * 24);
    // Tính số năm
    int so_nam = so_ngay / 365;
    // Tính số ngày còn lại sau khi tính số năm
    int so_ngay_con_lai = so_ngay % 365;

    printf("%d phut tuong duong voi %d nam va %d ngay.\n", phut, so_nam, so_ngay_con_lai);
}

int main() {
    int so_phut;

    // Nhập số phút từ người dùng
    printf("Nhap so phut: ");
    scanf("%d", &so_phut);

    // Gọi hàm chuyển đổi và in kết quả
    chuyen_doi_phut_sang_nam_ngay(so_phut);

    return 0;
}
