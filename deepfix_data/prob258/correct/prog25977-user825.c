#include<stdio.h>
int main() {
    int i,n;
    int arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]); }
    for(i=0;i<n;i++){
      if((arr[0]>arr[1])||(arr[i-1]>arr[i-2])){
                 printf("Yes\n"); }
      else{
          printf("No\n"); }
          if((arr[i]>arr[i-1])||(arr[i]>arr[i+1])){
            printf("yes\n"); }
            else{
                printf("No\n"); } }
return 0; }