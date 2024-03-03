#include <stdio.h>
#include <stdlib.h>
int main() {
    int size1,size2,i;
    char num1[501];
    char num2[501];
    char sum[502];
    int l1,l2;
    scanf("%d", &size1);
    scanf("%d", &size2);
    for(i=0;i<=size1;i++) {
        num1[i]=getchar(); }
    num1[i]='\0';
	for(i=0;i<=size2;i++) {
	    num2[i]=getchar(); }
	num2[i]='\0';
	for(i=0;i<=size1;i++) {
	    l1=(num1[size1-i]-'1'+1);
	    l2=(num2[size2-i]-'1'+1);
	    if(l1+l2<10) {
	        sum[i]= 'l1+l2+quo';
	        quo=0; }
	    else {
	        rem=(l1+l2)%10;
	        sum[i]='rem+quo';
	        quo=1; } }
	if(quo=1) {
	    sum[i]='1';
        sum[i+1]='\0'; }
	else
	sum[i]='\0';
	return 0; }