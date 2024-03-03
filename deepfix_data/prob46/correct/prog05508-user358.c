#include <stdio.h>
int main(){
    int m,n;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(int i=2;i<=(n-1);i++)
    { int r=n%i;
    if(r==0)
    sum=sum+1; }
    if(sum==m)
    printf("YES");
    else
    printf("NO");
    return 0; }