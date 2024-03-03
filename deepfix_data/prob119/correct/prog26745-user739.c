#include <stdio.h>
#include <stdlib.h>
int no_of_steps(int n) {
    int sum;
    if(n==0)
    sum=1;
    else
    sum=2*no_of_steps(n-1);
    printf("%d",sum-1); }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    k[t]='\0';
    for(i=0;i<t;i++) {
	   no_of_steps(k[i]); }
	return 0; }