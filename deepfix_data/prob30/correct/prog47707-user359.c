#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int max=-1;
    int i;
    for(i=0;i<n;i++){
        if((arr[i]>max) && (arr[i]<upperLimit)){
            max=arr[i]; } }
    return max; }
int main() {
  int i,t;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]); }
  int max=-1;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; } }
    printf("%d\n",max);
    i=1;
    while(i<k){
        t=getMaxLessThan(max);
     printf("%d\n",getMaxLessThan(max));
     i++; }
    return 0; }