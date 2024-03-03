#include <stdio.h>
#include <stdlib.h>
long catalan(int n)
{long i,a[17];
    if (n == 1)
       return 1;
    else
       n=n-1;
       i= ((catalan(n) * (2*n+2) * (2*n+1))/((n+1)*(n+2)));
       a[n]=catalan(n);
       return i; }
int main()
{ int i,j,l,y,t,n,a[17];
    scanf("%d",&n);
    l=catalan(15);
  printf("%d\n",a[5]);
     for(i=1;i<=n;i++) {
       scanf("%d\n",&t);
       for(j=0;j<17;j++)
       {    y=a[j];
           if(t<0 || t<y){ printf("no\n");break;}
           if(t==y){ printf("%d",y);break;} } }
	return 0; }