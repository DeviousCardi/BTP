#include <stdio.h>
int main() {
    int num1,num2,bar1[100],bar2[100],i,j,k,h;
    int sum=0;
	scanf("%d",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d",&bar1[i]); }
	for(j=0;j<num2;j++) {
	    scanf("%d",&bar2[j]); }
	for(k=0;k<num2;k++) {
	    for(h=0;h<num1;h++) {
	        if(bar2[k]/bar1[h]==1) {
	            sum=sum+1; }
	        else {
	            sum=sum; } } }
	if(sum%num2==0) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }