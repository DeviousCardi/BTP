#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k)
    {return 0;}
    else if(k=0)
    {return 1;}
    else {
        return B(n-1,k)+B(n-1,k-1); } }
int main() {
    int b,i,j;
    scanf("%d",&b);
    for(i=0;i<=20;i++) {
        for(j=i;j<=20;j++) {
            if(B(j,i)==b) {
                printf("%d %d",j,i);
                break; } } }
	return 0; }