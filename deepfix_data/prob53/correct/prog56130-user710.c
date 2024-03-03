#include<stdio.h>
long diff (long a[],int n,int i,long ans){
    if(i==n){return ans;}
    else{
        ans=ans-a[i];
        return diff(a,n,i+1,ans); } }
int main(){
    int n,i;
    scanf("%d",&n);
    long a [n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long x=diff(a,n,1,a[0]);
    printf("%ld",x);
    return 0; }