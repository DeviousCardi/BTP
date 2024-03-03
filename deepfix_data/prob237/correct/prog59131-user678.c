#include<stdio.h>
int arr[100];
int max;
int getInversions(int l,int r) {
  int invcount=0;
  for (int i=l;i<l+r-1;i++){
      for(int j=i+1;j<l+r;j++){
          if ( arr[i]> arr[j]){
          invcount++;} } }
  return invcount; }
int main() {
    int n;
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]); }
int invcount=getInversions(0,k);
int max=0;
for(int j=0;j<k;j++){
    if(invcount>max){
        max=invcount; } }
    printf("%d", max);
    return 0; }