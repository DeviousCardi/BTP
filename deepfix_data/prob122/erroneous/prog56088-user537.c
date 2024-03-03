#include <stdio.h>
int main(){
    int n,i,j,en,count=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        scanf("%d",&en);
        if(i==j)
        { en==1;
          count++; } }
    if(count==n)
    printf("given %dx%d matrix is identity matrix",n,n);
    else
    break(0);
    return 0; }