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
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
  c[i] = getInversions(i,k+i);
    max=c[0];
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(c[j]>c[i]){
                max=a[j]; } } }
    printf("%d",max);
    return 0; }