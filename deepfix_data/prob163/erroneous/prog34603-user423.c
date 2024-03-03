#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n1,n2,i,j;
	 char a[1000],b[1000];
	 scanf("%d %d",&n1,&n2);
	 for (i=0;i<n1;i++) {
	          scanf ("%c",&a[i]); }
	 for (i=0;i<n2;i++) {
	          scanf ("%c",&b[i]); }
	 if(n1>n2) {
	 for (k=0;k<=n1;k++) {
	         sum=a[k]+b[k] } }
	 if(n2>n1) {
	 for (k=0;k<=n2;k++) {
	      sum=a[k]+b[k] } }
	 printf("%lf",sum)
	return 0; }