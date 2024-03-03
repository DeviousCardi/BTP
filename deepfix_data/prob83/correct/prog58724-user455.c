#include <stdio.h>
int fun(int i,int d) {
    i=(i+d)%5;
    return i; }
int main() {
    int n,i;
    scanf("%d",&n);
    char num[n];
    for(i=0;i<n;i++)
    scanf("%c",&num[i]);
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        num[i]=num[fun(&i,&d)];
        printf("%d",num[i]); }
    return 0; }