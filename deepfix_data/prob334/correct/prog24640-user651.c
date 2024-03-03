#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,b,ct=1,c=0;
	scanf("%d %d",&h,&b);
	for(i=1;i<=h;i++) {
	    for(j=i;j<h;j++) {
	        printf(" ");
	        c++; }
	    for(k=1;k<=(b-2*c);k++) {
	        printf("%d",ct);
	        if(ct<9)ct++;
	        else {
	            ct=ct+1;
	            ct=ct%10; } }
	    for(j=(b-2*c+1);k<=b;k++) {
	        printf(" "); }
	    printf("\n"); }
	return 0; }