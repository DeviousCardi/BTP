#include <stdio.h>
int main() {
    float mA,mB,mC,eA,eB,eC,M1,M2,M3;
    scanf("%f%f%f%f%f%f",&mA,&mB,&mC,&eA,&eB,&eC);
    M1=(mA*40.0/50.0)+(eA*60.0/100.0 ;
    M2=(mB*40.0/50.0)+(eB*60.0/100.0);
    M3=(mC*40.0/50.0)+(eC*60.0/100.0);
    if((M1>=M2)&&(M1>=M3)) {
        if(M2>=M3) {
            printf("Median weighted score = %.2f",M2); }
        else {
            printf("Median weighted score = %.2f",M3); } }
    else if((M2>=M1)&&(M2>=M3)) {
        if(M1>=M3) {
            printf("Median weighted score = %.2f",M1); }
        else {
            printf("Median weighted score = %.2f",M3); } }
    else if((M3>=M2)&&(M3>=M1)) {
        if(M2>=M1) {
            printf("Median weighted score = %.2f",M2); }
        else {
            printf("Median weighted score = %.2f",M1); } }
	return 0; }