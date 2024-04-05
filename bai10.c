#include<stdio.h>

int main(){
    int a;
    int b;
    int chia;
    printf("nhap so nguyen thu 1: ");
    scanf("%d",&a);
    printf("\nnhap so nguyen thu 2: ");
    scanf("%d",&b);
    chia = a/b;
    printf("\nket qua: %d",chia);
    return 0;
}