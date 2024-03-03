#include <stdio.h>
int main(){
    int i,j,n,m,count;
    count=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        for(j=2;j<=n-1;j++) { {
               if(i%j==0)
               count=count+1; }
                if(count==0)
               printf("No");
                    else
                      printf("YES"); } }
    return 0; }