#include<stdio.h>
int main() {
    int n,i,j,in=0,fi,f=0;
    scanf("%d",&n);
    int r[n],l[2*n],s[n];
    for(i=0;i<n;i++) {
        scanf("%d",&r[i]);
        s[i]=0; }
    l[0]=1;
    for(i=1;i<2*n;i++)
        l[i]=r[l[i-1]-1];
    for(j=1;j<=n;j++) {
        for(i=0;i<2*n;i++)
            if(l[i]==j)
                s[j-1]++;
        if(s[j-1]>1)
                break; }
    for(i=0;i<2*n;i++) {
        if(l[i]==j) {
            in=i;
            break; } }
    printf("%d %d",in,fi); }