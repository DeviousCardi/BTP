#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,b,k,c=0;
    for(j=0;j<n;j++){
        if(arr[j]<=upperLimit){
            upperLimit = arr[j];
            printf("%d",arr[j]); } }
    upperLimit = b;
    return upperLimit; }
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
 printf("%d",getMaxLessThan(4));
    return 0; }