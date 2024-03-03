#include <stdio.h>
#include <stdlib.h>
int moves(int n, char a,char b ,char c) {
    int count;
    if(n==0)
    count=0;
    else {
            count=moves(n-1,a,c,b);
            count=count+1; }
    return count; }
int main() {
    int i,t;
    scanf("%d",&t);
    int a[1000],k[1000];
    for(i=0;i<t;i++) {
            scanf("%d",&a[i]);
            k[i]=moves(a[i],'b','c','d');
            printf("%d\n",k[i]); }
    return 0; }