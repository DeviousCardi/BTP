#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k) {
    if(n<k)
    return 0;
    else if(k==0)
    return 1;
    else {
     return bin(n-1,k)+bin(n-1,k-1); } }
int main() {
    int i,j;
    scanf("%d\n",&b);
    for(i=1;i<=20;i++) {
        for(j=1;j<=20;j++) {
            if(bin(i,j)==b) {
                printf("%d %d",i,j); } } }
	return 0; }