#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return (B(n-1,k)+B(n-1,k-1)); }
int check(int n,int k,int b) {
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
        for(k=0;k<=20;k++)
        if(b==B(n,k))
        return 1;
        else
        return -1; }
    return 0; }
int main() {
    int n=0,k=0,b;
    scanf("%d",b);
    if (check(n,k,b)==1)
    printf("%d %d\n",n,k);
    if (check(n,k,b)==-1)
    printf("-1");
	return 0; }