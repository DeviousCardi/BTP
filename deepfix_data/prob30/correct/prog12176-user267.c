#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,d,k,c=0,m;
    for(j=0;j<n;j++){
        if(arr[j]<=upperLimit){
           c=c+1;
           if(c==1) k=arr[j];
          else      d=arr[j];
           if(d>k)
           m=d;
           else m=k;
           k=d; } }
    return upperLimit=m; }
int main() {
 int k, i;
  scanf("%d %d",&n,&k);
 for(i=0; i<n; i++)
   scanf("%d", &arr[i]);
  int b= arr[0];
  for(i=0; i<n; i++){
      if(arr[i]>b)
      b= arr[i];
      arr[i]=b; }
  k=getMaxLessThan(2);
  printf("%d",k);
    return 0; }