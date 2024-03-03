#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,i=0,j,maxm=0,maxq=0;
    scanf("%d",&n);
    int num[n],maxtill[n];
    while(i<n) {
        maxtill[i]=1;
        i++; }
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        for(j=0;j<i;j++) {
            if(num[j]<num[i]) {
                maxq=max(maxtill[j],maxq);
                maxtill[i]=1+maxq; } } }
    for(i=0;i<n;i++) {
        maxm=max(maxtill[i],maxm); }
    printf("%d",maxm);
    return 0; }