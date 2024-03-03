#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int s=0,i;
    for(i=0;i<n;i++){
        s=s+cat(i)*cat(n-i-1); }
    printf("%d\n",s);
    if (n==0)
    return 1;
    else
    return s; }
int main() {
	int i,j,t,k,sum=0;
	scanf("%d", &t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=1;j<=k;j++){
	        sum=sum+cat(k); }
	    printf("%d\n",sum); }
	return 0; }