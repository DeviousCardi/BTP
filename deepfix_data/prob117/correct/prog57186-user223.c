#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char c,char b ) {
   if (n==1)
   return 1;
   else
   return
   ((hanoi(n-1,a,b,c))+(hanoi(n-1,c,b,a)+1)); }
int main() {
	 int i,t,j,k,a[100],cheak;
	 scanf("%d",&t);
	char e,b,c;
	 for(i=0;i<100;i++) {
	     a[i]=hanoi(i,e,b,c); }
	 for(j=0;j<t;j++) {
	     scanf("%d",&k);
	     for(i=0;i<100;i++) {
	     if(a[j]==k) {
	         cheak=1; }
	     else
	     cheak=0;
	 }}
	 if(cheak==1)
	 printf("yes");
	 else printf("no");
	return 0; }