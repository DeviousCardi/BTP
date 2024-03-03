#include <stdio.h>
#include <stdlib.h>
int catalan(int k) {
    int i;
    if(k<=0)
    return 1;
    else
    for(i=0;i<k;i++) {
     return (catalan(i)*catalan(k-i-1)); } }
int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    for(j=0;j<15;j++) {
	     printf("%d\n",catalan(j)); } }
	return 0; }