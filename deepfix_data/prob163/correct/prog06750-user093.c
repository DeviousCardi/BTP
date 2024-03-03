#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j=0,n,m,a[500],b[500],x[501],r=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    if(n<=m)
        { for(i=m-1;i>=m-n;i--)
            {   x[j]=b[m-1]+a[i]+r;
                if(x[j]>=10)
                  x[j]=x[j]%10;
                r=x[j]/10;
                n--;
                j++;
                printf("%d",x[j]); } }
    for(i=j;i>=0;i--)
        {printf("%d",x[i]); }
	return 0; }