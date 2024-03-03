#include <stdio.h>
int sum(int ar1[],int i,int j){
    return (ar1[i]+ar1[j]); }
int chk(int arr[],int st,int lt){
    int x=sum(arr,st,lt);
    if(st=lt-1)
    return x;
    else
    return chk(arr,st++,lt); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++){
        chk(ar,i,n-1); }
    return 0; }