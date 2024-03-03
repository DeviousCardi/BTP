#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    if(n==0) {
        return 1; }
    else{
        return (2*(2*n-1)/(n+1))*catlan(n-1); } }
int main() {
    int t,i,j;
    scanf("%d\n",&t);
    int a[t];
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]);
    for(j=0;j<a[i];j++) {
        int sum=0;
        sum=sum+catlan(j) }
    printf("%d",sum); }
	return 0; }