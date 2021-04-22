#include<stdio.h>

int main(int argc, char *argv[] ){
	
	float top, bottom, height;
	
	printf("tinh dien tich hinh thang\n");
	printf("nhap do dai day nho :");
	scanf("%f", &top);
	
	printf("nhap do dai day lon:");
	scanf("%f" ,&bottom);
	
	printf("nhap do dai chieu cao:");
	scanf("%f" ,&height);
	
	printf("dien tich hinh thang: %.2f",((top+bottom)/2)*height);
	return 0;
	
	
	
	
	
	}
