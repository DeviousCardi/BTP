#include<stdio.h>
int diff (a[n],n,i){
    int ans,n;
    if(i==n){return ans;}
    else{
        ans=ans-a[i];
        return diff(a,n,i+1,ans); } }
int main(){
    int n;
    int a [n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",a[i]); }
    int x=diff(a,n,1,a[0]);
    printf("%d",x);
    return 0; }