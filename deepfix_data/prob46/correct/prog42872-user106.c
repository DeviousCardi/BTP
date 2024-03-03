#include <stdio.h>
int main() {
    int j,n,m,count;
    count=0;
    scanf("%d%d",&m,&n);
        for(j=2;j<=n-1;j++) {
            if(n%j==0)
            count=count+1; } {
              if(m==count)
              printf("YES");
              else
              printf("NO"); }
    return 0; }