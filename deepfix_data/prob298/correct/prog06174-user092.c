#include <stdio.h>
#include <stdlib.h>
int Catalan(int n);
int main() {
	int t,i,m,k=0;int count=0;
	scanf("%d",&t);
	int A[t];
	for(i=0;i<t;i=i+1) {
	    scanf("%d\n",&A[i]); }
	for(m=0;m<t;m=m+1) {
	    while((k>=0)&&(k<=Catalan(17))&&!count) {
	    if(Catalan(k)==A[m]) {
	        printf("yes\n");
	        count++; }
	    k++; }
	    if(!count)
	    printf("no\n"); }
	return 0; }
int Catalan(int n) {
    if(n==0) {
        return 1; }
    if(n==1) {
        return 1; }
    else {
        return 2*(2*(n-1)+1)*Catalan(n-1)/(n+1); } }