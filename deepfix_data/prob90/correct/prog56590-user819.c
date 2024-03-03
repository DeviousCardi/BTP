#include <stdio.h>
int main(){
  int k=0;
  scanf("%d",&k);
  int n=0;
  scanf("%d",&n);
  int list[500];
  for(int i=0;i<n;i++){
      scanf("%d",&list[i]); }
  int i=0;
  for(i=0;i<n;i++){
      if (list[i]<k){
          for(int j=0;j<n;j++){
             if(j!=i){
              int sum=list[i]+list[j];
              if (sum==k){
                  printf("lucky"); } } } } }
    return 0; }