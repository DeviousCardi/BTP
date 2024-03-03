#include <stdio.h>
int main() {
    float msma, msmb, msmc;
    scanf("%f%f%f", &msma, &msmb, &msmc);
    float esma, esmb, esmc;
    scanf("%f%f%f", &esma, &esmb, &esmc);
    float A=(msma*40)/50+(esma*60)/100;
    float B=(msmb*40)/50+(esmb*60)/100;
    float C=(msmc*40)/50+(esmc*60)/100;
    if((A<=B&&B<=C)||(C<=B&&B<=A)) {
    printf("Median weighted score = %.2f", B); }
    else {
        if((C<=A&&A<=B)||(B<=A&&A<=C)) {
            printf("Median weighted score = %.2f", A); }
        else {
        if((B<=C&&C<=A)||(A<=C&&C<=B)) {
            printf("Median weighted score = %.2f", C); } } }
	return 0; }