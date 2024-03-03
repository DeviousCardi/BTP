#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if(k==0);
    return 1;
    int i=0,t;
    for(i=0;i<k;i++) {
        t=cat(i)+cat(i)*cat(k-i); }
    return t; }
int main() {
    int k;
    scanf("%d",&k);
    printf("%d",cat(k));
	return 0; }