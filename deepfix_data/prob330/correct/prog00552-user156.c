#include <stdio.h>
int main(){
    int n,i;
    int count=0;
    scanf("%d/n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    for(i=1;i<=n-2;i++) {
        if(ar[i]>ar[i-1]&&ar[i]>ar[i+1]) {
            count=count+1; } }
    printf("%d",count);
    return 0; }