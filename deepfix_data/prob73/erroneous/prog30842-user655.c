#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    printf("\n");
    int i,j,k,s,s1;
    s1=0;
    for(i=1;i<=n;i++){
        s=0;
        for(j=1;j<=m;j++){
            scanf("%d",&k);
            s=s+k; }
        printf("\n");
        if(s>s1){s1=s} }
  printf("%d",s1);
    return 0; }