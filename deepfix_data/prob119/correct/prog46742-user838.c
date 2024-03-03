#include <stdio.h>
#include <stdlib.h>
int moves(int n, char from,char to ,char tmp) {
    int count;
    if(n==1)
    count=1;
    else {
            count=moves(n-1,from,tmp,to);
            count=count+1; }
    return count; }
int main() {
    int i,t;
    char b,c,d;
    scanf("%d",&t);
    int a[1000];
    for(i=0;i<t;i++) {
            scanf("%d",&a[i]);
            printf("%d",moves(a[i],b,c,d)); }
    return 0; }