#include<stdio.h>
int main() {
    int A,B,C;
    scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&C);
if((A<=B)&&(B<=C)){ }
	    else if((B<=A)&&(A<=C)) {
	    else if((B<=C)&&(C<=A)) {
	    else if((A<=C)&&(C<=B)) {
	    else if((C<=B)&&(B<=A)) {
	    else if((C<=A)&&(A<=B)) {
if((A+B)<C){
    printf("INVALID");}
    else if((A*A+B*B)<C*C){
        printf("OBTUSE");}
        else if((A*A+B*B)>C*C){
            printf("ACUTE");}
            else if((A*A+B*B)=C*C){
                printf("RIGHT"); }
return 0; }