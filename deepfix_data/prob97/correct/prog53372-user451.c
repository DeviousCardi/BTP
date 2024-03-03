#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j ,n ;
    int s=0;
    n >0;
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {for(s=0;s<(n-i);s++)
                {printf(" "); }
                {for(j =1;j<=(2*i-1); j++)
                {printf("%d,\\n",s++%10); } } }
	return 0; }