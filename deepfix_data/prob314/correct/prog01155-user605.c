#include <stdio.h>
#include <stdlib.h>
int main() {
    int m,t,p;
    int n=0;
    int a[n];
	 scanf("%d%d",&n,&m);
	 p=getchar();
	 scanf("%d",&t);
	 while(p<20) {
	 a[n]=p;
	 n=n+1;
	 n=getchar(); }
	 if(a[n]<a[n+1]&&a[n]<a[n-1]) {
	 printf("Yes"); }
	 else {
	 printf("No"); }
	return 0; }