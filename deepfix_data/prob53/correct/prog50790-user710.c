#include<stdio.h>
int diff (int a[],int n,int i,int ans){
    if(i==n){return ans;}
    else{
        ans=ans-a[i];
        return diff(a,n,i+1,ans); } }
int main(){
    int n,i;
    scanf("%d",&n);
    int a [n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int x=diff(a,n,1,a[0]);
    printf("%d",x);
    return 0; }