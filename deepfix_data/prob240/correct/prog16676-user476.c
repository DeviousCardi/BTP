#include <stdio.h>
#include <stdlib.h>
double fact(int n) {
    if(n==0)
    return 1;
    else
    return fact(n-1)*n; }
void check(int k,int j) {
    int catalan_no;
    catalan_no=(2*fact(j))/(fact(j+1)*fact(j));
    if(k>catalan_no)
    printf("%d\n",(2*fact(j-1))/(fact(j)*fact(j-1)));
    else
    check(k,j+1); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    check(k,0); }
	return 0; }