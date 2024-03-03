#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    int i;
   int sum=0;
    if(n==0)
        return 1;
    else
        for(i=0;i<n;i++) {
            sum = sum + cat(i)*cat(n-1-i); }
        return sum ; }
int main() {
    int k,t,l;
    int i = 0;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        while(cat(i)<k) {
            l = cat(i);
            i++; }
        printf("%d",l); }
    return 0; }