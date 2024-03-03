#include<stdio.h>
int arr[100],count=0;
int getInversions(int l,int r)
{    for(int l=0;l<100-r;l++){
        for(int j=l+1;j<l+r;j++){
            if(arr[j] <arr[l]){
                count=count+1; } } } }
int main()
{ int n,i,j,k,a[n],b[n];
scanf("%d\n%d\n",&n,k);
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
for(i=0;i<n;i++){
    for(j=i;j<i+k;j++){
        getInversions(int i,int k); } }
    return 0; }