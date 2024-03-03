#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
  int invcount=0;
  for (int i=l;i<l+r;i++){
      for(int j=i;j<l+r;j++){
          for(int k=i+1;k<=l+r;k++){
          if ( arr[j]> arr[k]){
          invcount++;} } } }
 return invcount; }
int main() {
    int n;
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]); }
    printf("%d", getInversions(0, 0));
    return 0; }