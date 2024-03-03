#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(unsigned int n)
{   int i;
    if(n<=1) {
    return 1; }
    unsigned long int res=0;
    for(i=0;i<n;i++) {
        res= res+ catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
	int test,i,j;
	scanf("%d",&test);
 int b[18], c[1000];
	for(i=0;i<18;i++) {
	    b[i]=catalan(i); }
	for(j=0;j<test;j++) {
	    scanf("%d",&c[j]); }
	int d,e;
	for(d=0;d<test;d++) {
	    for(e=0;e<18;e++) {
	        if(c[d]==b[e]) {
	            printf("yes\n");
	            break; } }
	        if(e==18)
	        printf("no\n"); }
	return 0; }