#include <stdio.h>
#include <stdlib.h>
int no_of_steps(int n) {
    int sum;
    if(n==0)
    sum=1;
    else
    sum=2*no_of_steps(n-1);
    return sum; }
int main() {
    int t,i,P;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    k[t]='\0';
    for(i=0;i<t;i++) {
	  P=no_of_steps(k[i])-1;
	  printf("%d\n",P); }
	return 0; }