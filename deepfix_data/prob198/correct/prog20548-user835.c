#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1,num2,i,j,k,h,a[20],b[20],temp;
	scanf("%d",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&num2);
	for(k=0;k<num2;i++) {
	    scanf("%d",&b[k]); }
	for(j=0;j<num1;j++) {
	    for(h=0;h<num1;h++) {
	        if(a[j]>a[h]) {
	            temp=a[j];
	            a[j]=a[h];
	            a[h]=temp;
	            printf("%d\n",a[h]); }
	        else {
	            continue; } } }
	return 0; }