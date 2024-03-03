#include<stdio.h>
int max(int a,int b) {
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,m=0,i;
    scanf("%d",&n);
    int a[n],maxtill[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    maxtill[0]=1;
    for(i=1;i<n;i++) {
        maxtill[i]=max((1+maxtill[i-1]),1); }
    for(i=0;i<n;i++) {
    printf("%d",maxtill[i]);}
    return 0; }