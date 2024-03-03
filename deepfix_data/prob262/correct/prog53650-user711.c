#include<stdio.h>
#include<strings.h>
int reverse(int a[],int n,int start){
    if(n==1){
        printf("%d",a[n-1-start]);
        return 0; }
    if(n>=2){
        reverse(a,n,start+1);
        printf("%d ",a[n-1-start]);
        return 0; } }
int main() {
    int n,i,x;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    x=reverse(a,n,0);
    return 0; }