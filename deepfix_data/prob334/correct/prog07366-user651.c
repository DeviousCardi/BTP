#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,b,ct=1,c=0,x=0;
	scanf("%d %d",&h,&b);
	for(i=1;i<=h;i++) {
	    ct=i;
	    c=0;
	    for(j=i;j<h;j++) {
	        printf(" ");
	        c++; }
	    x=0;
	    for(k=1;k<=(b-2*c);k++) {
	        printf("%d",ct);
	        if(ct<9)ct++;
	        else {
	            ct=ct+1;
	            ct=ct%10; }
	        x++; }
	    for(j=(c+x);j<b;j++) {
	        printf(" "); }
	    printf("\n"); }
	return 0; }