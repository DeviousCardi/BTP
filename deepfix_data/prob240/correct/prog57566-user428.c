#include <stdio.h>
#include <stdlib.h>
float catalan( float n,float k) {
    if (k==1)return 1;
    return ((n+k)/k )*catalan(n,k-1); }
int main() {
	int a,b,c;
       scanf("%d",&a);
       for(b=1;b<=a;b++) {
           scanf("%d",&c);
           if (c<0)
           printf("only whole numbers acceptable");
           if (c==1 || c==0)
           printf("1");
           else
          { int i=c;
              while (i!=0)
           { if (((int)(catalan((float)i,(float)i)))<c)
             break;
           i--; }
           printf ("%d",(int)(catalan((float)i,(float)i)) ); } }
	return 0; }