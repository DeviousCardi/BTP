#include<stdio.h>
void check(int a[],int n,int key,int i) {
    if(i<=n){
    if(n==0) {
        printf("no");
        return; }
    else if(key==0) {
        printf("Yes");
        return; }
    else if(key<0) {
        printf("No");
        return; }
    else {
    check(a,n,key-a[i],i+1);
    check(a,n,key,i+1);
    return ; } }
    return; }
int main(){
   int i,n,k,a[10];
   scanf("%d %d\n",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%d ",&a[i]); }
   check(a,n,k,0);
    return 0; }