#include <stdio.h>
#include <stdlib.h>
int catalan(n){
    if(n==0)
    return 0;
    else
    return 2*catalan(n-1)+1; }
int main() {
    int i,cata=0,n;
    if(n==0)
    printf("0");
    for(i=0;i<n;i++) {
        cata+=catalan(i); }
	printf("%d",cata);
	return 0; }