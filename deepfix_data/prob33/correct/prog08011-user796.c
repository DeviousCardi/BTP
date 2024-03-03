#include <stdio.h>
int main() {
    int n,k,s,t,d,j;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&t);
    j=0;
    while(k>0) {
        s=t;
        scanf("%d",&t);
        if(s>t) {
            d=s-t;
            j=j+d; }
        if(s<t) {
            continue; }
        k--; }
    if(j>=n) {
        printf("No"); }
    else {
        printf("Yes");}
    return 0; }