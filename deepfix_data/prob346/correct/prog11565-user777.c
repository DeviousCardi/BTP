#include <stdio.h>
int main(){
    int n,i,j,str[i],tamp;
    scanf("%d\n",&n);
      for(i=0;i<n;i++){
      scanf("%d",&str[i]); }
      for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              if(str[i]>str[j]){
                  tamp=i;
                  i=j;
                  j=tamp;
                  printf("%d",str); } } }
    printf("end");
    return 0; }