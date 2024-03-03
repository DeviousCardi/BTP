#include <stdio.h>
int faux(int curr_idx,int curr_ele,int n,int i,int a[],int c[],int b[]){
    int i,u=0,j=0;
    if(curr_idx==i){
        while(curr_idx<i){
            if(a[curr_idx]==a[j]){
                  u=a[curr_idx];
                  curr_idx++; } }
        return; }
    else if(curr_ele>n)return;
    else{
        a[curr_idx]=curr_ele;
        seq(curr_idx+1,curr_ele+1,a,n,k);
        seq(curr_idx,curr_ele+1,a,n,k); } }
void f(int n,int i,int a[]){
    int c[30],b[30];
    return faux(0,a[0],n,i,a,c,b); }
int main() {
    int n,c=0;
    scanf("%d",&n);
    int a[30];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n/2;i++){
        c+=f(n,i,a); }
    return 0; }