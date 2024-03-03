#include<stdio.h>
int n;
int product(int t[],int size,int count){
        if(count==0){
            return t[0]*t[1]; }
        else{
            return product(t,n-1,count--); } }
int main() {
    int i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    printf("%d",product(a,n,n));
    return 0; }