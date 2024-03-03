#include <stdio.h>
#include <stdlib.h>
long catalan(int n)
{long i,a[17];
    if (n == 1)
       return 1;
    else
       n=n-1;
       return ((catalan(n) * (2*n+2) * (2*n+1))/((n+1)*(n+2))); }
int main()
{ int i,j,y,t,n;
    scanf("%d",&n);
     for(i=1;i<=n;i++) {
     scanf("%d\n",&t);
       for(j=1;j<=17;j++)
       {    y=catalan(j);
           if(t<0 || t<y){ printf("no\n");break;}
           if(t==y){ printf("yes\n");break;} } }
	return 0; }