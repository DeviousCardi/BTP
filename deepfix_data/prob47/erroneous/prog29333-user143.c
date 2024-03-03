#include <stdio.h>
#include <stdlib.h>
 int cat(int n) {
     int i,sum=0;
     if(n==0) {
         return 1; }
     else
     for(i=0;i<n;i++) {
     sum=sum+(cat(i)*cat(n-i-1)); }
     return sum; }
int main() {
    int i,j,t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        sum=0;
        scanf("%d",&k);
        for(j=0;j<k;j++) {
            sum=sum+cat(j); } {
       printf("%d\n",sum); } }
	return 0; }