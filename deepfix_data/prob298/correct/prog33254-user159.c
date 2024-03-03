#include <stdio.h>
#include <stdlib.h>
int catalan(int k) {
     if(!k) return 1;
     int sum;
     sum=(4*k-2)*catalan(k-1)/(k+1);
     return sum; }
int main() {
   int i,j,t,k[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d",&k[i]);
    for(j=0;j<t;j++)
    for(i=0;i<17;i++) {
     if(i==17) { printf("no\n"); break; }
    if(k[j]== catalan(i)) { printf("yes\n"); break; } }
	return 0; }