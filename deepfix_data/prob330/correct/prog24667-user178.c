#include <stdio.h>
int main() {
    int n,i,max=0;
    scanf("%d",&n);
    int ht[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ht[i]); }
    for(i=0;i<n;i++) {
        if(ht[i+1]>ht[i])
        max=ht[i+1]; }
    printf("%d",max);
    return 0; }