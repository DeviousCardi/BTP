#include <stdio.h>
#include <stdlib.h>
int main() { int a;
             scanff("%d",&a)
             for(i=1;i<=2*a+1;i++)
             {if (i<=a+1)
                 {for(j=1;j<=i;j++)
                 {if(j%2==0) printf{"x"};
                 else printf{"*"};}}
                else { for (j=1;j<i;j++)
                        {if (j%2==0) printf{"x"};
                         else printf{"*"};}} }
             printf{""\n""} }
	return 0; }