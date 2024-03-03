#include <stdio.h>
int main(){
    int n,i,j,str[n];
    scanf("%d\n",&n);
      for(i=0;i<n;i++){
      scanf("%d%d\n",&str[i],&str[j]); }
      for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              if(str[i]<str[j])
              printf("%d",str); } }
    printf("end");
    return 0; }