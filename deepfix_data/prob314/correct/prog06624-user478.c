#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    int j;
    int k,t;
      scanf("%d\n",&n);
      int a[n];
      for(i=0;i<n;i++){
          scanf("%d\n",&a[i]); }
      scanf("%d\n",&t);
          for(j=0;j<t;j++){
              scanf("%d\n",&k);
              if(n==1){
                  printf("Yes\n"); }
            else if(k==0){
                 if(a[k]<a[k+1]){
                     printf("Yes\n");
                 }else{
                     printf("No\n"); } }
             else if(k==n-1){
                 if(a[k]<a[k-1]){
                     printf("Yes\n");
                 }else{
                     printf("No\n"); } }
             else if(((a[k]<a[k-1]) && (a[k]<a[k+1])) || (n==1) ){
                  printf("Yes\n");
              }else{
                  printf("No\n"); } }
	return 0; }