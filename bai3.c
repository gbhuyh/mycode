#include<stdio.h>
#include<math.h>
int main(){
    float C,S,D,R;
    D=6;
    scanf("%f",&D);
    R=4;
    scanf("%f",&R);
    C = (6+4)*2;
    scanf("%f",&C);
    S = 6*4;
    scanf("%f",&S);
    printf("Chu vi cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f ",D,R,C);
    printf("\nDien tich cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f",D,R,S);
    return 0;
}