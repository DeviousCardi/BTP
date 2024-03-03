#include <stdio.h>
#include <stdlib.h>
int fact(n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else return n*fact(n-1); }
int catalan(n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    else  return (fact(2*n)/(fact(n+1)*fact(n))); }
int main() {
	int t,i,a[t];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("catalan(a[i])"); }
	return 0; }