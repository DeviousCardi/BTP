#include <stdio.h>
int main(){
    int n,t,i,m,j,d=1,k;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        t=1;
        for(j=i+1;j<n;j++){
          t++;
          if(arr[i]==arr[j]){
              t=m;
              k=j;
              break; }
          for(k=j+1;k<n;k++){
              if(arr[j]==arr[k]){
                  d++; } } } }
    printf("%d ",m);
    printf("%d",d);
    return 0; }