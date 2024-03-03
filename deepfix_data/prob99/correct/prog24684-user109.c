#include<stdio.h>
int max(int n,int a[n],int index){
    int count=0;
    for(int i=index;i<n-1;i++){
        if(a[i+1]>a[i])count++; }
    return count; }
int main() {
    int n,maxm=0;
    scanf("%d",&n);
    int m[n];
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        m[i]=max(n,a,i);
        if(m[i]>maxm)maxm=m[i]; }
    printf("%d",maxm);
    return 0; }