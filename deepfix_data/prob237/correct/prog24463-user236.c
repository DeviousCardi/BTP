#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int i,j ;
    int count=0;
    for (i=l;i<=l+r-1;i++){
    for (j=i+1;j<=l+r-1;j++){
        if (arr[i]>arr[j]){
            count=count+1; } } }
return count; }
int main() {
    int n,k,i ;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int a=0;
    for(i=1;i<n-k+1;i++){
        a=a+getInversions(i,k); }
    printf("%d",a);
    return 0; }