#include <stdio.h>
int value_check(int num[],int n,int k){
    if(k==0){
        return 1; }
    if(n==0 && k!=0){
        return 0; }
    if (n!=0){
        return (value_check(num+1,n-1,k) || value_check(num+1,n-1,k-num[0])); } }
int main() {
    int num[30],n,k,x;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]); }
    x=value_check(num,n,k);
    if(x==0){
        printf("NO"); }
    else
    printf("YES");
    return 0; }