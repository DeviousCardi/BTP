#include <stdio.h>
int main(){
    int n,j,s=0,i;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<n;i++) {
        scanf("%d",&l[i]); }
    for(j=1;j<n-1;j++) {
        if(l[j]>l[j+1]&&l[j]>l[j-1]) {
            s++; } }
    printf("%d",s);
    return 0; }