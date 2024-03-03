#include <stdio.h>
int main() {
    int n,i,s,j
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&s);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]+a[j]==s)
            printf("($d,%d)",a[i],a[j]); } }
    return 0; }