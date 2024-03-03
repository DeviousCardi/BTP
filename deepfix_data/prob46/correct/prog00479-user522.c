#include <stdio.h>
int main() {
    int n,m,count=0;
    scanf("%d %d",&m,&n);
    for(int i=2;i<=(n/2);i++) {
        if(n%i==0)
        count=count+1; }
    if(count==m)
    printf("YES");
    else
    printf("NO");
    return 0; }