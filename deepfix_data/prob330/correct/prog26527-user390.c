#include <stdio.h>
int main(){
    int c[100],count=0,n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        scanf("%d",&c[i]); }
    for(i=1;i<n;i++) {
        if(c[i-1]<c[i]&&c[i]>c[i+1]) {
            count++; } }
    printf("%d",count);
    return 0; }