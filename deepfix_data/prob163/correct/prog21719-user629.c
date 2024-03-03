#include <stdio.h>
#include <stdlib.h>
int maximum(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int size1,size2,i;
    char num1[501];
    char num2[501];
    char sum[502];
    int l1,l2;
    int quo=0;
    int max;
    scanf("%d", &size1);
    scanf("%d", &size2);
    for(i=0;i<=size1;i++) {
        num1[i]=getchar(); }
    num1[i]='\0';
	for(i=0;i<=size2;i++) {
	    num2[i]=getchar(); }
	num2[i]='\0';
	max=maximum(size1,size2);
	for(i=0;i<max;i++) {
	    l1=num1[size1-i]-'1'+1;
	    l2=num2[size2-i]-'1'+1;
	    if((l1+l2+quo)<10) {
	      sum[max-i]='l1+l2+quo';
	      quo=0; }
	    else {
	        sum[max-i]=(l1+l2+quo)%10;
	        quo=1; } }
	if(sum[1]>'9') {
	    sum[1]=sum[1]%10;
	    sum[0]=1;
	    for(i=0;i<=max;i++)
	    printf("%c",sum[i]); }
	else
	{   for(i=1;i<=max;i++)
	    printf("%c",sum); }
	return 0; }