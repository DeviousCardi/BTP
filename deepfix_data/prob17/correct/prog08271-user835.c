#include <stdio.h>
int main() {
    int num1,num2,bar1[100],bar2[100],i,j,k,h;
    int sum=0;
    int count=0;
	scanf("%d",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d",&bar1[i]); }
	for(j=0;j<num2;j++) {
	    scanf("%d",&bar2[j]);
	    count=count+bar2[j]; }
	for(k=0;k<num2;k++) {
	    for(h=0;h<num1;h++) {
	        if(bar2[k]/bar1[h]==1) {
	            sum=sum+bar1[h]; }
	        else {
	            continue; } } }
	printf("%d\n",sum);
	if(count==sum) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }