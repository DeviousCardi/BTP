#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int i,j,n,count=0;
    for(int i=0;i<l+r-1;l++){
        for(int j=l+1;j<=l+r-1;j++){
            if(arr[j] <arr[i]){
                count=count+1; } } }
return count; }
int main()
{ int n,i,j,a[n],k,max;
scanf("%d\n%d\n",&n,&k);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]); }
int l,r,b[r-l+1];
  b[l] = getInversions(i,k+i);
    max=b[1];
    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            if(b[j]>b[i]){
                max=b[j]; } } }
    printf("%d",max);
    return 0; }