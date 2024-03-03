#include <stdio.h>
#include <stdlib.h>
long int catlan(int n){
    if(n<=1)
    return 1;
    long int cat=0;
    int i;
    for(i=0;i<n;i++){
        cat=cat+catlan(i)*catlan(n-i-1); }
    return cat; }
int main() {
	int n,temp,j=0;
	scanf("%d\n",&n);
	for(j=0;j<n;j++){
	    scanf("%d\n",&temp);
	    printf("%ld",catlan(temp)); }
	return 0; }