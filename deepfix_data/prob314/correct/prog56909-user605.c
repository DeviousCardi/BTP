#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,p;
    int a[n];
	 scanf("%d",&n);
	 a[n]=getchar();
	 scanf("%d",&t);
	 while(t<(n-1)) {
	 t=n; }
	 n=1;
	 if(a[n]<a[n+1]&&a[n]<a[n-1]) {
	 printf("Yes"); }
	 else {
	 printf("No"); }
	return 0; }