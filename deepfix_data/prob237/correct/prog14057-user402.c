#include<stdio.h>
int main() {
    int n,m,k,i,j,c,b;
    scanf("%d%d",&n,&k);
    int a[n];
    for(c=0;c<n;c++){
        scanf("%d",&a[c]); }
    m=0;
    for(b=0;b<=n-k;b++){
        for(i=b;i<=b+k;i++){
            for(j=i;j<b+k;j++){
                if(a[i]>a[j]&&i<j){
                    m=m+1; } } } }
    return 0; }