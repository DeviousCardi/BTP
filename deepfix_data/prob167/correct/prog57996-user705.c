#include<stdio.h>
int sum(int ar[],int n,int start){
    if(start==n-1){
        return ar[start]; }
    else{
        return ar[start]+sum(ar,n,start+1); } }
int main() {
    int n,s1,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    s1=sum(a,n,0);
    printf("%d",s1);
    return 0; }