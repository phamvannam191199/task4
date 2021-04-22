#include<stdio.h>
//  C/5=(F-32)/9
//  9C=5*(F-32)
// F= (9C/5)+32
// F= (1,8*C)+32
int main(int argc, char *argv[]) {
    float C,F;
    printf("nhap do C");
    scanf("%f",&C);
    
    F= (1.8*C)+32;
    printf("%1.f do C bang %1.f do F\n", C, F);
    }
