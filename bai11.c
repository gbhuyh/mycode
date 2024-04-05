#include<stdio.h>

int main(){
    
    float a;
    float sum = 0;
    int i;
    int n = 4;
    for ( i = 0; i < n; ++i){
        printf("nhap so thu %d: ",i+1);
        scanf("%f",&a);
        sum += a;
    }
    float avg = sum/n;
    
    
    printf("trung binh cong cua %d so: %.2f\n",n,avg);
    return 0;
}