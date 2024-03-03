#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a==b)
        {if (a>c)
        {printf("%d", c);}
        else printf("%d",a);}
    if (b==c)
        {if (a>b)
        {printf("%d", b);}
        else printf("%d", a);}
    if (a==c)
        {if (b>c)
        {printf ("%d", a);}
        else printf("%d", b);}
    if (a>b)
        {if (b>c)
            {printf("%d", b);}}
        else if (a>c)
             {printf("%d", c);}
             else printf("%d",a);
	return 0; }