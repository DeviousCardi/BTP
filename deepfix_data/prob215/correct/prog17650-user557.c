#include <stdio.h>
#include <stdlib.h>
int sum_div(int n){
    int sum,i;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
        sum=sum+i; }
    return sum; }
int main() {
	int n;
	scanf("%d",&n);
	if(sum_div(n)==n){
	    printf("YES");}
	else printf("NO");
	return 0; }