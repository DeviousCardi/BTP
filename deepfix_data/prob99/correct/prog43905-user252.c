#include<stdio.h>
int max(int k[],int b) {
    int i,max=0;
    for(i=0;i<b;i++) {
        if(k[i]>max) max=k[i]; }
    return max; }
int check(int a[],int t) {
    int ct[20],tm[19],i,j,k,p,res,tmp;
    for(i=0;i<t;i++) {
        for(k=0;k<t;k++) tm[k]=1;
        for(p=i;p<t;p++) {
        tmp=p;
        for(j=tmp+1;j<t;j++) {
            if(a[tmp]<a[j]) {
               tm[p]++;
                tmp=j; } } }
        ct[i]=max(tm,t-(i+1)); }
    res=max(ct,t);
    return res; }
int main() {
    int n,num[20],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&num[i]); }
    printf("%d\n",check(num,n));
    return 0; }