#include <stdio.h>
int main() {
    int m,n,i,flag=0;
    scanf("%d %d",&m,&n);
    for(i=2;i<n;i++) {
        if(n%i==0)
        flag++; }
    if(flag==m)
    printf("YES");
    else
    printf("NO");
    return 0; }