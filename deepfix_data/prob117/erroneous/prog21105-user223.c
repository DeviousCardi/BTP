#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char c,char b ) {
   if (n==1)
   return 1;
   else
   return
   hanoi(n-1,a,b,c);
   hanoi(n-1,b,c,a); }
int main() {
	 int i,j,t,k,a[100],cheak;
	 char a,b,c;
	 scanf("%d",&t);
	 for(i=0;i<100;i++) {
	     a[i]=hanoi(i,e,b,c); }
	 for(i=0;i<t;i++) {
	     scanf("%d",&k);
	     if(a[i]==k) {
	         cheak=1; }
	     else
	     cheak=0; }
	 if(cheak==1)
	 printf("yes");
	 else printf("no");
	return 0; }