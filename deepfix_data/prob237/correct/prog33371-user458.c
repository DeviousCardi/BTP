#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int i,j,count;
count=0;
    for( i=0;i<l+r-1;l++){
        for(j=l+1;j<=l+r-1;j++){
            if(arr[j] <arr[i]){
                count=count+1; } } }
return count; }
int main()
{ int n,i,k,max;
scanf("%d\n%d\n",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]); }
int l,r,b[n-k+1];
r=k;
for(l=0;l<n-k+1;l++){
  b[l] = getInversions(l,r); }
    max=b[0];
    for(i=1;i<n-k+1;i++){
            if(b[i]>max){
                max=b[i]; } }
    printf("%d",max);
    return 0; }