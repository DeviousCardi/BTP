#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if((k=0)||(k=1))
    return 1;
    else
    int i=0;
    for(i=0;i<k;i++) {
        int t=0;
        t=t+cat(i)*cat(k-i-1);
        return t; } }
int main() {
    int k;
    scanf("%d",&k);
    printf("%d",cat(k));
	return 0; }