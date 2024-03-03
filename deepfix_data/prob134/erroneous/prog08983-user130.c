#include <stdio.h>
#include <stdlib.h>
int bino(int n,int k)
{int ans=0;
    if(n<k)
ans=0;
else if(k==0) {
    ans=1;
}else
ans=bino(n-1,k)+bino(n-1,k-1);}
return ans; }
int main() {
    int b,n,k;
    scanf("%d",&b;)
    for(n=20;n>=0;n--) {
        for(k=20;k>=0;k--) {
        if(bino(n,k)==b)
        {break;c=1;}
    }if(c==1)
    break; }
	return 0; }