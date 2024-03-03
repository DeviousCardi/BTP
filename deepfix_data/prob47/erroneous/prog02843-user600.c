#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int s=0;
    for(i=0;i<n;i++){
        s=s+cat(i)*cat(n-i); }
    if (n<=1)
    return 1;
    else
    return s; }
int main() {
	int i,j,t,k;
	scanf("%d", &t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=1;j<=k;j++){
	        sum=sum+cat(k); }
	    printf("%d",sum); }
	return 0; }