#include <stdio.h>
int main(){
    int i,n,p[100];
    int s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&p[i]); }
    for(i=1;i<n-1;i++) {
        if (p[i-1]<p[i] && p[i]>p[i+1])
        s=s+1; }
    printf("%d",s);
    return 0; }