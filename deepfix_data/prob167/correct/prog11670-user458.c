#include<stdio.h>
int sum(long int n,long int a[]){
    if(n==0)
    return 0;
    else
return a[n-1]+sum(n-1,a); }
int main() {
   long int n;
    scanf("%d",&n);
   long int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    printf("%ld",sum(n,a));
    return 0; }