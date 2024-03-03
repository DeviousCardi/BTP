#include <stdio.h>
int main() {
    float A1;
    float B1;
    float C1;
    float A2;
    float B2;
    float C2;
    float median;
    scanf("%f%f%f%f%f%f" ,&A1,&B1,&C1,&A2,&B2,&C2);
    float medianA=A1*40/50+A2*60/100;
    float medianB=B1*40/50+B2*60/100;
    float medianC=C1*40/50+C2*60/100;
    printf("%0.2f\n%0.2f\n%0.2f\n" ,medianA,medianB,medianC);
    if(medianA<medianB&&medianB<medianC) {
        printf("%f" ,medianB); }
    else if(medianB<medianC&&medianC<medianA) {
        printf("%f" ,medianC); }
    else {
    printf("%f" ,medianA); }
	return 0; }