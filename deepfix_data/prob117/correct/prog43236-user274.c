#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi_1(int n,char A,char C,char B)
{if(n==0)return 0;
    if(n==1) {
        count=count+1; }
    else {
        hanoi_1(n-1,A,B,C);
        count=count+1;
        hanoi_1(n-1,B,C,A); }
   return count; }
int main() {
    char A='a',B='b',C='c';
    int t,c=0,j,i,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {c=0;
        scanf("%d",&n);
        for(j=0;j<=n;j++){count=0;
        if(hanoi_1(j,A,B,C)==n)
        {printf("yes\n");c++;break;}
        if(hanoi_1(j,A,B,C)>n)break;
        }if(c==0)printf("no\n"); }
    return 0; }