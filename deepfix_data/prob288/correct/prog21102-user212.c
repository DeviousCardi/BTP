#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() { int a,i,j,k;
char c,d;
             scanf("%d",&a);
             if(a%2==1) { c='x';d='*';}
             else { c='*'; d='x';}
             for(i=1;i<=2*a+1;i++)
             {if (i<=a+1) {for(k=0;k<a+1-i;k++)
                printf(" ");
                 {for(j=1;j<=i;j++)
                 {if(j%2==1){
                     printf("%c",c);}
                 else printf("%c",d);}}}
                else {for(k=0;k<i-a-1;k++) printf(" ");
                { for (j=2*a+1;j>=i;j--)
                        {if (j%2==1) printf("%c",c);
                         else printf("%c",d);}}}
             printf("\n"); }
	return 0; }