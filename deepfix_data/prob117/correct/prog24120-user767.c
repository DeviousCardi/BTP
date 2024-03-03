#include <stdio.h>
#include <stdlib.h>
int toh(int n,char a,char b,char c) {
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    else return toh(n-1,a,c,b)+toh(n-1,b,a,c)+1; }
int main() {
	int n,i,t,k[20];
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=1;i<=t;i++) {
	    for(n=0;n<=k[i];n++) {
	        if (k[i]==toh(n,'a','b','c')) {
	            printf("yes\n");
	            break; } }
	    if(k[i]!=toh(n,'a','b','c')) {
	        printf("no\n"); } }
	if(k[i]!=toh(n,'a','b','c')) {
	    printf("no\n"); }
	return 0; }