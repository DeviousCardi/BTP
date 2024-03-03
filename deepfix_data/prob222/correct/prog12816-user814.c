#include <stdio.h>
int main() {
	float a1,b1,c1;
	float a2,b2,c2;
	scanf("%f%f%f\n%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
	float marksA =a1*(40/50)+a2*(60/100);
	float marksB =b1*(40/50)+b2*(60/100);
	float marksC =c1*(40/50)+c2*(60/100);
	if(marksA>marksB) {
	    if(marksB>marksC) {
	        printf("Median weighted score = %.2f",marksB); }
	    else {
	        if(marksA>marksC) {
	            printf("Median weighted score = %.2f",marksA); }
	        else
	        printf("Median weighted score = %.2f",marksC); } }
	else {
	    if(marksA>marksC) {
	        printf("Median weighted score = %.2f",marksA); }
	    else {
	        if(marksB>marksC) {
	            printf("Median weighted score = %.2f",marksC); }
	        else
	        printf("%Median weighted score = .2f",marksB); } }
	return 0; }