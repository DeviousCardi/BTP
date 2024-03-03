#include <stdio.h>
#include <stdlib.h>
int ctln(int n) {
    int sum=0,i;
    if(n==0)
    return 1;
    else {
        for(i=0;i<n;i++) {
            sum=sum+(ctln(i)*ctln(n-i-1)); }
        return sum; } }
int main(){
    int n,i,sum,t,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++) {
            sum=sum+ctln(j); }
        printf("%d\n",sum); }
	return 0; }