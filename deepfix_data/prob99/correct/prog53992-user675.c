#include<stdio.h>
int max(int a[],int n){
    int c=0;
    int d[20];
    for(int i=0;i<n;i++){
        if(a[i]<a[n]){
            d[c]=i;
            c++; } }
    if(c==0){
        return 1; }
    else{
        int maxi=max(a,d[0]);
        for(int i=1;i<c;i++){
            if(max(a,d[i])>maxi){
                maxi=max(a,d[i]); } }
        return maxi; } }
int main() {
    int n,maxi=0;
    int a[20];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    maxi=max(a,n-1);
    printf("%d",maxi);
    return 0; }