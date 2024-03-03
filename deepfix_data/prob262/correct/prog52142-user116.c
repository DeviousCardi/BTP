#include<stdio.h>
#include<strings.h>
void reverse(int a[],int n){
    if(n==0){
        return; }
    printf("%d ",a[n-1]);
    return reverse(a,n-1); }
int main() {
    int a[1000000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    reverse(a,n);
    return 0; }