#include<stdio.h>
int max(int n,int a[n],int index){
    int count=1,p=index;
    for(int i=index;i<n-1;i++){
        if(a[i]>a[p]){count++;p=i;} }
    return count; }
int main() {
    int n,maxm=1;
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