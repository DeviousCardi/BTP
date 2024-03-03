#include <stdio.h>
int main() {
    int n,k,i,j,b,c,l;
    scanf("%d\n",&n);
    int a[n];
    c=0;
    for(k=0;k<n;k++){
        scanf("%d ",&a[k]); }
    int sum=0;
    for(l=0;l<n;l++){
        sum=sum+a[l]; }
    for(i=0;i<n;i++){
        for(j=i+1;j<n-1;j++){
            if(a[i]==a[j]) {
                b=a[i];
                c=1;
                break; } }
    if(c==1) break; }
    int mnum=(n*(n+1))/2-(sum-b);
    printf("%d\n%d",b,mnum);
    return 0; }