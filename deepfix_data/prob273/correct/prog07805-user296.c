#include <stdio.h>
#include<math.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
	if(n>4) {
	    for(i=(n%4);i>=(-(n%4));i=i-1) {
	        for(j=i;j<=(n%4);j=j+1) {
	            printf("%d",j); }
	       printf("%d\n"); } }
	else {
	    for(i=n;i>=(n/(-1));i=i-1) {
	        for(j=i;j<=n;j=j+1) {
	          printf("%d",j); }
     printf("%d\n"); } }
	return 0; }