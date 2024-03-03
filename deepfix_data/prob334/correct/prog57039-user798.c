#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,m,b,n;
    scanf("%d%d",&n,&b);
    m=0;
    for(i=1;i<=n;i++) {
        for(j=(b-(n-1)*2);j<=b;j=j+2)
        m=m+1;
        if(m>9){
            m=m%10; } }
	return 0; }