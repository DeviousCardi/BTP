#include <stdio.h>
int main() {
    float A,B,C;
    scanf("%f%f%f\n",&A,&B,&C);
     float avg= ((A+B+C)*40)/150;
     scanf("%f%f%f",&A,&B,&C);
   float Avg=((A+B+C)*60)/300;
   scanf("%f%f",&avg,&Avg);
	float med= (avg+Avg);
	printf("Median weighted score%.2f",med);
	return 0; }