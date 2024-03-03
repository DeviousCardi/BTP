#include<stdio.h>
#include<strings.h>
int array[100000];
void reverse(int a[],int n,int start){
    if(n==1){
        array[start]=a[n-1];
        return; }
    if(n>=2){
        array[start]=a[n-1];
        reverse(a,n-1,start+1); } }
int main() {
    int n,i,x;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    reverse(a,n,0);
    for(i=0;i<n;i++){
        printf("%d ",array[i]); }
    return 0; }