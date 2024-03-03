#include<stdio.h>
int arr[100];
int max;
int getInversions(int l,int r) {
  int invcount=0;
  for (int i=l;i<l+r-1;i++){
      for(int j=i+1;j<l+r;j++){
          if ( arr[i]> arr[j]){
          invcount++;} } }
  for(int r=0;r<l+r-1;r++){
      int max=0;
      if(invcount>max){
          max=invcount; } }
 return max; }
int main() {
    int n;
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]); }
    printf("%d", max);
    return 0; }