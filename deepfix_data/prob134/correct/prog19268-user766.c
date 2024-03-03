#include <stdio.h>
#include <stdlib.h>
int bio(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return bio(n-1,k)+bio(n-1,k-1); }
int main() {
    int b,n,k,flag;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
        for(k=0;k<=20;k++) {
            if(bio(n,k)==b) {
                printf("%d %d ",n,k);
                break; } } }
	return 0; }