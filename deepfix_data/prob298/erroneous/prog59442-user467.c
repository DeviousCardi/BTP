#include <stdio.h>
#include <stdlib.h>
int main() {
	 int t,i,j,k;
	 int c=0;
	 scanf("%d",&t);
	 for(i=1;i<=t;i++) {
	     scanf("%d",&k);
	     for(j=0;j<=17;j++) {
	         if(k==catln(i)) {
	             printf("yes\n");
	             c++;
	             break; } }
	     if(c==0) {
	         printf("no\n"); } }
	return 0; }
int catln(){
    if(n==0) {
        return 1; }
    else {
        return ((4n+2)/(n+2))*catln(n-1); } }