#include <stdio.h>
int main() {
    float H,W,bIndex;
    scanf("%f %f",&H,&W);
    bIndex=W/(H*H);
    if(bIndex<18.5) {
           printf("You have low weight"); }
    else if(bIndex>=18.5&&bIndex<25) {
           printf("You have normal weight"); }
	else if(bIndex>=25&&bIndex<30) {
	       printf("Obesity(1st-degree)"); }
	else if(bIndex>=30&&bIndex<35) {
	       printf("Obesity(2nd-degree)"); }
	else if(bIndex>=35&&bIndex<40) {
	       printf("Obesity(3rd-degree)"); }
	else if(bIndex>=40) {
	       printf("Obesity(4th-degree)"); }
	return 0; }