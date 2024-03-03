#include<stdio.h>
#include<strings.h>
void reverse(int a[],int b[],int i,int n){
    if(i==n){
        return; }
    b[i]=a[n-i-1];
    return reverse(a,b,(i+1),n); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int j;
    for(j=0;j<n;j++){
        scanf("%d ",&a[j]); }
    reverse(a,b,0,n);
    int k;
    for(k=0;k<n;k++){
        printf("%d",b[k]); }
    return 0; }