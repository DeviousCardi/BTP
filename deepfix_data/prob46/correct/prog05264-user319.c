#include <stdio.h>
int main(){
    int m,n,c;
    scanf("%d%d",&m,&n);
    c=1;
    int i=0;
    for(i=1;i<=n-2;i++){
        int p=0;
       if(n%c==0){
          p=p+1;
          c=c+1;
         if (p==m){
              printf("YES"); }
         break; } }
    printf("NO");
     return 0; }