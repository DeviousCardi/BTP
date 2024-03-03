#include<stdio.h>
int arr[100];
int getInversions(int l,int r){
if ( l >  r)
return  l;
else
return  r;}
int main() {
    int p,k,n,i,j,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)  {
        scanf("%d",&arr[i]); }
    for(p=1;p<k;p++) {
             for(i=0;i<n;i++) {
        for(j=i+1;j<n;j+p)
      getInversions(arr[i],arr[j]);
          c++; }
      printf("%d",&c); }
    return 0; }