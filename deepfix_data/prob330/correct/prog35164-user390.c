#include <stdio.h>
int main(){
    int c[100],count,n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        scanf("%d",&c[100]); }
    i=0;
    for(i=1;i<n;i++) {
        if(c[i-1]<c[i]&&c[i]>c[i+1])
        count++; }
    printf("%d",count);
    return 0; }