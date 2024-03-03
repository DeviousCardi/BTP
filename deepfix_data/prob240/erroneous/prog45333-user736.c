#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    sum=0;
    if(n==0)
    return 1;
    else
        for(i=0;i<n;i++) {
            sum = sum + cat(n-1) }
        return sum ;
int main() {
    int k,t,l;
    scanf("%d\n",&t);
    scanf("%d",&k);
    while(cat(i)<k) {
        l = cat(i);
        i++; }
    printf("%d",l);
	return 0; }