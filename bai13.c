#include<stdio.h>

int main(){
    unsigned int ID_nv, so_h_lam, tien_luong_moi_h, tien_luong_thang;
    
    printf("nhap ID: ");
    scanf("%u",&ID_nv);
    printf("\ntong so gio lam: ");
    scanf("%u",&so_h_lam);
    printf("\ntien luong moi gio: ");
    scanf("%u",&tien_luong_moi_h);
    tien_luong_thang = so_h_lam * tien_luong_moi_h;
    printf("\nnhan vien co so ID %u nhan duoc luong thang nay la: %u",ID_nv,tien_luong_thang);
    return 0;
}