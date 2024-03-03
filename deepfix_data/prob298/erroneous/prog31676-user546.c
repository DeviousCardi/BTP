#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    int i;
    if(n==0)
    return 1;
    else{
    for(i=0;i<=n;i++) {
      k=cat(i)*cat(n-i-1); }
    return k; } }
int main() {
    int i,t,k,j=0;
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        if(cat(j)==k)
        printf("yes");
        else{
        printf("no");
        j++; } }
	return 0; }