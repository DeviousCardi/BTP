#include <stdio.h>
int main() {
    float msma, msmb, msmc;
    scanf("%f%f%f", &msma, &msmb, &msmc);
    float esma, esmb, esmc;
    scanf("%f%f%f", &esma, &esmb, &esmc);
    float A=(msma*40)/50+(esma*60)/100;
    float B=(msmb*40)/50+(esmb*60)/100;
    float C=(msmc*40)/50+(esmc*60)/100;
    if(A<=B<=C) {
    printf("Median weighted score = %.2f", B); }
    else {
        if(C<=A<=B) {
            printf("Median weighted score = %.2f", A); }
        else { {
            printf("Median weighted score = %.2f", C); } } }
	return 0; }