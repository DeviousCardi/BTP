#include <stdio.h>
#include <stdlib.h>
int f(int) {
     if(n!=2&&n!=1) {
         return f(n-1)+f(n-2); }
     else if(n==2) {
         return 1; }
     else {
         return 0; } }
int main() {
	int t,i,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a[i]);
	    printf("%d\n",f(a[i])); }
	return 0; }