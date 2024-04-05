#include<stdio.h>

int main(){
    float a,b;
    printf("nhap vao so thu nhat va so thu hai\n");
    scanf("%f %f",&a, &b);
    if ((a!=(int)a)&&(b!=(int)b)){
        printf("hai so nhap vao khong phai so nguyen \n");
    }
    if ((a==(int)a)&&(b!=(int)b)){
        printf("so thu nhat la so nguyen, so thu hai khong phai so nguyen \n");
    }
    if ((a!=(int)a)&&(b==(int)b)){
        printf("so thu nhat khong phai so nguyen, so thu hai la so nguyen \n");
    }
    if((a==(int)a)&&(b==(int)b)){

        printf("hai so deu la so nguyen, ");
    }
    if(a==b) printf("hai so bang nhau\n");
    if(a>b) printf("so thu nhat lon hon so thu hai\n");
    if(a<b) printf("so thu nhat be hon so thu hai");
    return 0;
}