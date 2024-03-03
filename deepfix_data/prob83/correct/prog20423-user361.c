#include <stdio.h>
int main() {
    int n,d,i,temp;
    int arr[500];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++){
        if(i<d){
      printf("%d",arr[n+i-d]);  }
        else{
            printf("%d",arr[i-d]); } }
    printf("%d",arr[i-d]);
    return 0; }