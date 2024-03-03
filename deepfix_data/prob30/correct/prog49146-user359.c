#include <stdio.h>
int arr[100]={0};
int n,k,i,t;
int getMaxLessThan(int upperLimit) {
    int max=-1;
    for(i=0;i<n;i++){
        if((arr[i]>max) && (max<upperLimit)){
            max=arr[i]; } }
    return max; }
int main() {
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]); }
  int max=-1;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; } }
    printf("%d",max);
    printf("%d\n",getMaxLessThan(max));
    return 0; }