#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if
	    (a>=b&&a>c)
	    {if (b>c&&b!=a)
	    printf("%d",b);
	        else
	        printf("%d",c);}
	    else if
	        (b>=c&&b>=a)
	        {if (a>c&&a!=b)
	        printf("%d",a);
	            else
	            printf("%d",c); }
	        else if (c>=a&&c>=b)
	        {if (a>b&&a!=c)
	        printf("%d",a);
	        else
	        printf("%d",b); }
	return 0; }