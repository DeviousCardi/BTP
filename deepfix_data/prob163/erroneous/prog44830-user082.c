#include <stdio.h>
#include <stdlib.h>
int main() {
	int no1[500],no2[500],sum[501];
	int i,size1,size2,max,carry=0;
	char ch1,ch2;
	scanf("%d\n",&size1);
	scanf("%d\n",&size2);
	for(i=0;i<size1,i++) {
	    ch1=getchar();
	    no1[i]=ch1; }
	for(i=0;i<size2) {
	    ch2=getchar();
	    no2[i]=ch2; }
	if(size1>size2) {
	   max=size1+1; }
	else if(size1==size2) {
	    max=size1+1; }
	else {
	    max=size2+1; }
	for(i=max-1;i>=0;i--) {
	    if(size1<0) {
	       no1[i]=0; }
	    if(size2<0) {
	        no2[i]==0; }
	    sum[i]=no1[size1]+no1[size2]+carry;
	    if(sum[i]>9) {
	        sum[i]=no1[i]+no2[i]-10;
	        carry=1; }
	    else {
	        carry=0; }
	    size1=size1-1;
	    size2=size2-1; }
	for(i=0;i<max;i++) {
	    printf("%c",sum[i]); }
	return 0; }