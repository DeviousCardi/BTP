#include <stdio.h>
int main() {
    float A,B,C,a1,b1,c1,a2,b2,c2;
    scanf("%f%f%f",&a1,&b1,&c1);
    scanf("%f%f%f",&a2,&b2,&c2);
    A = ((a1)*40)/50 + ((a2)*60)/100;
    B = ((b1)*40)/50 + ((b2)*60)/100;
    C = ((c1)*40)/50 + ((c2)*60)/100;
	if(A>=B){
	    if(B>=C){
	        printf("Median weighted score = %f",B); }
	    else{
	        if(C>=A){
	        printf("Median weighted score = %f",A);}
	        else {
	            printf("Median weighted score = %f",C); } } }
	else if(B>A){
	    if(A>=C){
	        printf("Median weighted score = %f",A); }
	    else{
	        if(C>=B){
	            printf("Median weighted score = %f",B); }
	        else{
	            printf("Median weighted score = %f",C); } } }
	return 0; }