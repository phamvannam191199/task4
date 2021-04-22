#include<stdio.h>


	//chu vi & dien tich hinh vuong
	int main(){

		float  S, a,CV;
		printf("nhap a=", a);
		scanf("%f", &a);
		
		S= a*a;
		CV= a*4;
		
		printf ("dien tich hinh vuong %f\n", S);
		printf("chu vi hinh vuong %f\n", CV);
		
		}
		//chu vi & dien tich hinh chu nhat
	int main(){

		float  S, a, b, CV;
		printf("nhap a=", a);
		scanf("%f", &a);
		
		printf("nhap b=",b);
		scanf("%f",&b);
		
		S= a*b;
		CV= (a+b)/2;
		
		printf ("dien tich hinh vuong %f\n", S);
		printf("chu vi hinh vuong %f\n", CV);
		
		}
		//chu vi & dien tich hinh tron
	int main(int argc, char *argv[]) {
	float r, d, c, s;

	printf("Tinh dien tich va chu vi cua mot vong tron\n")
	printf("Nhap do dai ban kinh hinh tron = ");
	scanf ("%f", &r);

	d = r *2;
	c = d * 3.14;
	s = r*r * 3.14;

	printf("Chu vi vong tron = %f \n", c);
	printf("Dien tich vong tron = %f \n", s);

	return 0;
