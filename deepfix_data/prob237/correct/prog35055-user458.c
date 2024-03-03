#include<stdio.h>
int arr[100],count=0;
int getInversions(int l,int r)
{    for(int l=0;l<100-r;l++){
        for(int j=l+1;j<l+r;j++){
            if(arr[j] <arr[l]){
                count=count+1; } } }
return count; }
int main()
{ int n,i,j,k,a[n],max,b[n];
scanf("%d\n%d\n",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
for(i=0;i<n;i++){
  b[i] = getInversions(i,k); }
    max=b[0];
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[j]>a[i]){
                max=a[j]; } } }
    printf("%d",max);
    return 0; }