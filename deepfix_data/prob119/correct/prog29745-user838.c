#include <stdio.h>
#include <stdlib.h>
int moves(int n) {
    int count;
    if(n==0)
    count=0;
    else {
            count=2*moves(n-1);
            count=count+1; }
    return count; }
int main() {
    int i,t;
    scanf("%d",&t);
    int a[1000],k[1000];
    for(i=0;i<t;i++) {
            scanf("%d",&a[i]);
            k[i]=moves(a[i]);
            printf("%d\n",k[i]); }
    return 0; }