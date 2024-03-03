#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int ht[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ht[i]); }
    int max=ht[0];
    for(i=0;i<n;i++) {
        if(ht[i+1]>max)
        max=ht[i+1]; }
    printf("%d",max);
    return 0; }