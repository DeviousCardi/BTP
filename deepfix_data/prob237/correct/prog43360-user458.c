#include<stdio.h>
int arr[100],count=0;
int getInversions(int l,int r)
{   int b[100];
    for(int l=1;l<100-r;l++){
        for(int j=l+1;j<l+r+1;j++){
            if(arr[j] <arr[l]){
                count=count+1; } }
        b[l]=count;
        count=0; }
return b[100]; }
int main()
{ int n,i,j,k,a[n],max,c[n];
scanf("%d\n%d\n",&n,&k);
for(i=1;i<n+1;i++){
    scanf("%d",&a[i]); }
  c[n] = getInversions(i,k+i);
    max=c[1];
    for(i=1;i<n+1;i++){
        for(j=i;j<n;j++){
            if(c[j]>c[i]){
                max=a[j]; } } }
    printf("%d",max);
    return 0; }