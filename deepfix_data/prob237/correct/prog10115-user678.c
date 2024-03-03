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
int max=0;
for(int l=0;l<n-k;l++){
    for(int r=l+1;r<l+k;r++){
        int max=0;
        int invcount=getInversions(l,r);
    if(invcount>max){
        max=invcount; } } }
    printf("%d", max);
    return 0; }