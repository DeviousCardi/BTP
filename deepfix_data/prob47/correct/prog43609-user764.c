#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=1;i<t+1;t=t+1){
	    scanf("%d",j);
	    int k=sum(2*j)/(sum(j+1)*sum(j));
	    printf("%d\n",k); }
	return 0; }
int sum(int n){
    if(n=0)
    return 1;
    else
    return (n*(n-1)); }