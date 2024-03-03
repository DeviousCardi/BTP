#include <stdio.h>
#include <stdlib.h>
int bino(int n,int k)
{int ans=0;
    if(n<k)
ans=0;
else if(k==0) {
    ans=1;
}else
ans=bino(n-1,k)+bino(n-1,k-1);
return ans; }
int main() {
    int b,n,k;int c=0;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
        for(k=0;k<=20;k++)
    {printf("%d",bino(n,k));
        if(bino(n,k)==b)
        {c=1;break;}
    }if(c==1)
    break; }
    printf("%d %d",n,k);
	return 0; }