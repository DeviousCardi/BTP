#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int catalan(int n){
    if(n==1||n==0){
        return 1; }
    int i;
    int sum=0;
    for(i=0; i<n; i++){
    sum=sum+catalan(i)*catalan(n-i-1); }
    return sum; }
int main() {
    int t,n,i;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d", &n);
        printf("%d\n", catalan(n)); }
	return 0; }