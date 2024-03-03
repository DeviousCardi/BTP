#include<stdio.h>
int arr[100];
int getInversions(int n,int k) {
  int invcount=0;
  for (int i=0;i<n;i++){
      for(int j=i+1;j<k;j++){
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