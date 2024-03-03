#include <stdio.h>
#include <stdlib.h>
float catalan( float n,float k) {
    if (k==1)return 1;
    return ((n+k)/k )*catalan(n,k-1); }
int main() {
	int a,b,c,i=0;
       scanf("%d",&a);
       for(b=1;b<=a;b++) {
           scanf("%d",&c);
           if (c<0)
           printf("only whole numbers acceptable");
           if (c==1 || c==0)
           printf("1");
           else
           while ((int)(catalan((float)i,(float)i))<c)
           i++;
           i--;
           printf ("%d",(int)(catalan((float)i,(float)i)) ); }
	return 0; }