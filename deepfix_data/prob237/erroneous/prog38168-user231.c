#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    if(l>r)
    return 1;
    else{
        return 0; } }
int main() {
    int i,j,k,m,n,p,z=0;
    scanf("%d%d",&n,&k);
    if
    int s[n];
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(j=0;j<=n-k;j++){
        int q=0;
        for(m=j;m<=j+k-1;m++){
            for(p=m+1;p<=j+k-1;p++){
                q=q+getInversions(s[m],s[p]); } }
        if(q>z){
            z=q; } }
    printf("%d",z);
    return 0; }