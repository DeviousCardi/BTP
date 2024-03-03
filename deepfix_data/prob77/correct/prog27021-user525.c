#include <stdio.h>
int main() {
    int n;
    int m,l;
    int i;
    int v;
    int p,q;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<=n-1;i++) {
    scanf("%d",&ar[i]); }
    m=ar[0];
    for(i=0;i<=n-1;i++) {
        if(ar[i]>=m)
        {m=ar[i];
         p=i; } }
    l=ar[0];
    for(i=0;i<=n-1;i++) {
        if(ar[i]<=l)
        {l=ar[i];
         q=i; } }
    v=ar[p];
    ar[p]=ar[q];
    ar[q]=v;
    for(i=0;i<=n-1;i++) {
    printf("%d",ar[i]); }
    printf("end");
    return 0; }