#include <stdio.h>
int main() {
    int i,j,l,n1,n2;
	scanf("%d\n",&n1);
	int a[100];
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("\n");
	scanf("%d\n",&n2);
	int b[100];
	for(j=0;j<n2;j++)
	scanf("%d",&b[n2]);
	int flag=0;
	for(i=0;i<n1;i++)
	{if (b[0]==a[i])
	break;
	}for(j=i+1;j<i+n2+1;j++){
	    for(l=1;l<n2;l++)
	{if
	 (a[j]==b[l])
	   {flag=flag+1;}}}
	     if (flag==n2-1)
      {printf("YES");}
      else printf("NO");
	return 0; }