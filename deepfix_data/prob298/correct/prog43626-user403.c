#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if (n == 1)
       return 1;
    else
       n=n-1;
       return ((catalan(n) * (2*n+2) * (2*n+1))/((n+1)*(n+2))); }
int main()
{ int i,j,y,t,n,a[17];
    scanf("%d",&n);
     for(i=0;i<17;i++)
   {  a[i]=catalan(i);printf("%d\n",a[i]);}
     for(i=1;i<=n;i++) {
       scanf("%d\n",&t);
       for(j=0;j<17;j++)
       {    y=a[j];
           if(t<0 || t<y){ printf("no\n");break;}
           if(t==y){ printf("%d",y);break;} } }
	return 0; }