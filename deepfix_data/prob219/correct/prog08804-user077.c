#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a==b)
        {if (a>c)
        printf("%d", c);
        else printf("%d",a);}
    else if (b==c)
            {if (a>b)
            {printf("%d", b);}
            else printf("%d", a);}
         else if (a==c)
                    {if (b>c)
                    {printf ("%d", a);}
              else printf("%d", b);}
                    else if (a>b)
                            {if (b>c)
                            {printf("%d", b);}
                            else if (a>c)
                                 {printf("%d", c);}
                                 else printf("%d",a);}
                        else if (b<c)
                             {printf("%d", b);}
                             else if (a>c)
                                  {printf("%d", a);}
                                  else printf("%d", c);
	return 0; }