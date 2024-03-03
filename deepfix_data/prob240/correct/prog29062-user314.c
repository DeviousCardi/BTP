#include <stdio.h>
#include <stdlib.h>
int catalan(int x) {
    int i,sum=0;
    if(x==0){return 1;}
    if(x>0) {
        for(i=0;i<x;i++) {
            sum=sum+(catalan(i)*catalan(x-i)); } }
    return sum; }
int main() {
    int i,t,k;
	scanf("%d",&t);
	int a[t];
	for(i=1;i<=t;i++) {
	    scanf("%d", &a[i]);
	   k=catalan(a[i]);
	   printf("%d\n",k); }
	return 0; }