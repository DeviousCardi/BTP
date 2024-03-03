#include <stdio.h>
int main() {
    int m,n,i,j,flag=0,pfactor;
    scanf("%d %d",&m,&n);
    for(i=2;i<n;i++) {
        for(j=2;j<=i;j++) {
          if(i%j==0)
          flag=flag++; }
        if(flag==0) {
            if(n%i==0)
            pfactor++; } }
    if(n!=1) {
        if((pfactor)==m)
        printf("YES");
        else
        printf("NO"); }
    else
    printf("NO");
    return 0; }