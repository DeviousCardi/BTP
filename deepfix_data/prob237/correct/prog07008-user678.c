#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
  int invcount=0;
  for (int i=l;i<r;i++){
      for(int j=i+1;j<=r;j++){
          if ( arr[i]> arr[j]){
          invcount++;} } }
 return invcount; }
int main() {
    int n;
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]); }
    printf("%d", getInversions(n, k));
    return 0; }