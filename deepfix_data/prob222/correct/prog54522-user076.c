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
	        printf("%f",B); }
	    else{
	        if(C>=A){
	        printf("%f",A);}
	        else {
	            printf("%f",C); } } }
	else if(B>A){
	    if(A>=C){
	        printf("%f",A); }
	    else{
	        if(C>=B){
	            printf("%f",B); }
	        else{
	            printf("%f",C); } } }
	return 0; }