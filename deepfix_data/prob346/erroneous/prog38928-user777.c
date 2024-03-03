#include <stdio.h>
int main(){
    int n,i,str[n];
    scanf("%d\n",&n);
      for(i=0;i<=n;i++){
      scanf("%d",&str[i]);}
      for(i=0;i<=99;i++){
          for(j=0;j<=99;j++){
              if(j==str[i])
              printf("%d"); } }
    printf("end");
    return 0; }