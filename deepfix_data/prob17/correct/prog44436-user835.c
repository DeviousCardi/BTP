#include <stdio.h>
int main() {
    int num1,num2,bar1[100],bar2[100],i,j,k,h,t,s;
    int sum=0;
	scanf("%d",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d",&bar1[i]); }
	scanf("%d",&num2);
	for(j=0;j<num2;j++) {
	    scanf("%d",&bar2[j]); }
	for(k=0;k<num1;k++) {
	    for(h=0;h<num2;h++) {
	        if(bar1[k]==bar2[h]) {
	            sum=sum+1;
	            printf("%d",sum);
	            break; }
	        else {
	            continue; } }
	    for(t=k+1;t<num1;t++) {
	        for(s=h+1;s<num2;s++) {
	            if(bar1[t]==bar2[s]) {
	                sum=sum+1; } } } }
	if(sum==num2) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }