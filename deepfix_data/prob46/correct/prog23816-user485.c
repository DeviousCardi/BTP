#include <stdio.h>
int main() {
    int m,n,i,j,flag=0,pfactor;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
          if(i%j==0)
          ++flag; }
        if(flag==0) {
            if(n%i==0)
            pfactor++; } }
    if((pfactor-2)==m)
    printf("YES");
    else
    printf("NO");
    return 0; }