#include <stdio.h>
int count(int k,int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main() {
    int a[1000],n,i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++){
        if(count(i,n,a)==2){int repeat=i;}
        else if(count(i,n,a==0){int missing=i;}) }
    printf("%d\n%d",repeat,missing);
    return 0; }