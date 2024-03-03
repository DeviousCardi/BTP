#include<stdio.h>
#include<strings.h>
int b[int max];
int reverse(int a[],int n){
    if(n==1){
        printf("%d",a[n-1]);
        return 0; }
    if(n>=2){
        reverse(a,n-1);
        printf("%d",a[n-1]);
        return 0; } }
int main() {
    int n,i,x;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    x=reverse(a,n);
    return 0; }