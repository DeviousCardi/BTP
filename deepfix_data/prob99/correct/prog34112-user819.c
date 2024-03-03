#include<stdio.h>
int main() {
    int n, arr[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    int max=0;int count=0;
    for(int i=0;i<n;i++){
        for(int x=1;x<n-i;x++){
          int less=arr[i];
          count=1;
          for(int j=i+x;j<n;j++){
            if(arr[j]>less){
                count++;
                less=arr[j]; } }
           if(count>max){
            max=count; } } }
   printf("%d",max);
    return 0; }