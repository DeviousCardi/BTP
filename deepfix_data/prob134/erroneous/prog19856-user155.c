#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k)
{   int ret=0;
    if(n<k) {
        ret=0; }
    else if(k==0) {
        ret=1; }
    else {
        ret=binomial(n-1,k)+binomial(n-1,k-1); }
    return ret; }
int main() {
	int b,i,j;
	scanf("%d",&b);
	if(b<0) {
	    printf("-1"); }
	else if(b==0) {
	    printf("0 1"); }
	else if(b==1) {
	    printf("0 0"); }
	for(i=0;i<21;i++) {
	    for(j=0;j<=i;j++) {
	        if(binomial(i,j)==b) {
	            printf("%d %d",i,j);
	            return 0; }
	        else {continue;} } }
	if(binomial(i-1,j-1))!=b) {
	    printf("-1"); }
	return 0; }