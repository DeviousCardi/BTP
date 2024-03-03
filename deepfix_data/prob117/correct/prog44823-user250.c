#include <stdio.h>
#include <stdlib.h>
int TOH(int n,char A,char B,char C) {
     int count;
     if(n>0) {
         count=TOH(n-1,A,C,B);
         count++;
         count+=TOH(n-1,C,B,A); }
     return count; }
int main() {
	int i,k,t,j,count=0;
	int c[25];
	char A,B,C;
	scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	  for(i=1;i<25;i++) {
	    c[i]=TOH(i,A,B,C);
	    if(k==c[i]) {
	        count++;
	        break; }
	    else
	       continue; }
    	if(count==0)
	    printf("no\n");
	    else
	    printf("yes"); }
	return 0; }