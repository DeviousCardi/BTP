#include<stdio.h>
int max(int k[],int b) {
    int i,max=0;
    for(i=0;i<b;i++) {
        if(k[i]>max) max=k[i]; }
    return max; }
int check(int a[],int t) {
    int ct[20],i,j,res;
    for(i=0;i<t;i++) ct[i]=1;
    for(i=0;i<t;i++) {
        for(j=i+1;j<t;j++) {
            if(a[i]<a[j]) ct[i]++; } }
    res=max(ct,t);
    return res; }
int main() {
    int n,num[20],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&num[i]);
        printf("%d ",num[i]); }
    printf("%d\n",check(num,n));
    return 0; }