#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    float k;
    if(n==0)
    return 1;
    else {
      k=(2.0*(2*n-1)/(n+1))*cat(n-1);
      return k; } }
int main() {
    int i,t,k,j=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        if(cat(j)==k)
        printf("yes");
        else{
        printf("no");
        j++; } }
	return 0; }