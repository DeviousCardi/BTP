#include <stdio.h>
int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int ht[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ht[i]); }
    int max=ht[0];
    for(i=0;i<n-1;i++) {
        if(ht[i+1]>max) {
            max=ht[i+1];
            count++; } }
    printf("%d",count);
    return 0; }