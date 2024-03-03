#include<stdio.h>
int max(int a,int b) {
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m=0,i,j;
    scanf("%d",&n);
    int a[n],maxtill[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        maxtill[i]=1;
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++) {
            if(a[j]<a[i])
              maxtill[i]=max((1+maxtill[j]),maxtill[i]); } }
    for(i=0;i<n;i++);
    printf("%d",maxtill[i]);
    return 0; }