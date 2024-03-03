#include <stdio.h>
int main(){
    int n,t=1,i,m,j,d=0,k;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          t++;
          if(arr[i]==arr[j]){
              m=t;
              k=j;
              break; }
          for(k=j;k<n;k++){
              if(arr[j]==arr[k]){
                  d++; } } } }
    printf("%d ",m);
    printf("%d",d);
    return 0; }