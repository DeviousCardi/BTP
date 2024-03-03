#include <stdio.h>
#include <stdlib.h>
void catalan(int k-1) {
     if(k==1 || k==2) return 1;
     int i,j,sum=0;
     for(i=1,j=k-1;i<k;i++,j--)
     sum = sum+catalan(i-1)*catalan(j-1);
     return sum; }
int main() {
    int i,j,t,k[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d",&k[i]);
    for(j=0;j<t;j++)
    for(i=0;i<17;i++) {
     if(i==17) { printf("no"); break; }
    if(k[j]== catalan(i)) { printf("yes"); break; } }
	return 0; }