#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return B(n-1,k)+B(n-1,k-1); }
int main() {
    int n,k,b,t=0;
    scanf("%d",&b);
    for(n=0;n<21;n++) {
        for(k=0;k<21;k++) {
            if(B(n,k)==b) {
                t=1;
                printf("%d %d\n",n,k);
                break; } }
        if(t==1)
        break; }
    if((n>20 || k>20)&&(t!=1)) {
        printf("-1"); }
	return 0; }