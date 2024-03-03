#include <stdio.h>
int main(){
    int m,n,i,r,count=0;    \\i=index,r=remainder when divided count                                   =counting the no of factor found
    scanf("%d%d",&m,&n);   \\taking input from users for m and n
    for(i=2;i<n;i++)        \\loopf for finding factors {
        r=n%i;
        if(r==0) {
            count=count+1;      \\counting the no of m-factor found } }
    if(count==m)                \\checking if result matches with                                   entry given {
        printf("YES"); }
    else                        \\if result did not match
    printf("NO");
    return 0; }