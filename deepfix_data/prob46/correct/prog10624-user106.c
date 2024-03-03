#include <stdio.h>
int main() {
    int j,n,m,count;
    count=0;
    scanf("%d%d",&n,&m);
        for(j=2;j<=n-1;j++) {
            if(n%j==0)
            count=count+1; }
        printf("%d",count); {
              if(m==count)
              printf("YES"); }
    return 0; }