#include <stdio.h>
long int sum(long int a[],long int n,long int i,long int k){
    if(i==n){
        return k; }
    k=k+a[i];
    return sum(a,n,i+1,k); }
int main() {
    long int n,i,k,l,flag=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    k=sum(a,n,0,0);
    for(i=0;i<n;i++){
        l=sum(a,i,0,0);
        if(l==k-l){
            flag++; } }
    if(flag==0){
        printf("NO"); }
    else{
        printf("YES"); }
    return 0; }