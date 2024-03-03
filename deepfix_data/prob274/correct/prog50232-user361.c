#include <stdio.h>
int main(){
    int n,t,i,j,d=1,k;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        t=0;
        for(j=i+1;j<n;j++){
          t++;
          if(arr[j]==1){
              j=k;
              break; }
          for(k=j;k<n;k++){
              if(arr[i]==arr[k]){
                  d++; } } } }
    printf("%d ",t);
    printf("%d",d);
    return 0; }