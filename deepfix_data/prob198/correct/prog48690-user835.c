#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1,num2,i,j,k,h,a[100],b[100],temp,z,sum;
	scanf("%d\n",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&num2);
	for(k=0;k<num2;k++) {
	    scanf("%d\n",&b[k]); }
	for(j=0;j<num1;j++) {
	    for(h=0;h<num1;h++) {
	        if(a[j]>=a[h]) {
	            temp=a[j];
	            a[j]=a[h];
	            a[h]=temp; }
	        if(a[j]==a[h]) {
	            continue; }
	        else {
	            continue; } } }
	printf("%d\n",a[num1-1]);
	sum=0;
	for(z=0;z<num2;z++) {
	    if(a[num1-1]!=b[z]) {
	        sum=a[num1-1]; }
	    else {
	        continue; } }
	if(sum>=1) { }
	else { }
	return 0; }