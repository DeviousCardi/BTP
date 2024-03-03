#include <stdio.h>
int sum(int a[],int n,int i,int k){
    if(i==n){
        return k; }
    k=k+a[i];
    return sum(a,n,i+1,k); }
int main() {
    int n,i,k,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    k=sum(a,n,0,0);
    for(i=0;i<n;i++){
        l=sum(a,i,0,0);
        if(l==k/2){
            printf("YES"); }
        else{
            printf("NO"); } }
    return 0; }