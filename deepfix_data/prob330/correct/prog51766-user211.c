#include <stdio.h>
int main(){
    int n,s=0,i;
    scanf("%d",&n);
    int l[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&l[i]);
        if(l[i]>l[i+1]&&l[i]<l[i-1]) {
            s++; } }
    printf("%d",s);
    return 0; }