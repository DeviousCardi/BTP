#include <stdio.h>
int fn(int x,int y,int n,int a[]);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    if(fn(0,0,n,a)==1){printf("YES");}
    else{printf("NO");}
    return 0; }
int fn(int x,int y,int n,int a[]){
    if(n==0){
        if(x==y){return 1;}
        else{return 0;} }
    return fn(x+a[n-1],y,n-1,a)||fn(x,y+a[n-1],n-1,a); }