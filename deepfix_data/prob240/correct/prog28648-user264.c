#include <stdio.h>
#include <stdlib.h>
int catl(int n){
    int i,sum=0;
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    for(i = 0; i<n ;i++){
        sum = sum +catl(i)*catl(n-1-i); }
    return sum; }
int main() {
	int i,t,k[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&k[i]);
	printf("%d\n",catl(i)); }
	return 0; }