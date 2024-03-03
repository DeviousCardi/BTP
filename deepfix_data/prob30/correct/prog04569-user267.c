#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,d,k,c=0,m;
    for(j=0;j<n;j++){
              if(arr[j]<=upperLimit){
                   c=c+1;
        if(c==1) k=arr[j];
        else d=arr[j];
        if(d>k) m=d;
        else m=k; } }
    return 4; }
int main() {
 int k, i;
  scanf("%d %d",&n,&k);
 for(i=0; i<n; i++)
   scanf("%d", &arr[i]);
  int b= arr[0];
  for(i=0; i<n; i++){
      k=arr[i];
      if(k>b)
      b= arr[i];
      k=b; }
  return 0; }