#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j,k,s=0,s1;
    s1=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&k);
            s=s+k; }
        if(s>s1) {
            s1=s; }
        s=0; }
  printf("%d",s1);
    return 0; }