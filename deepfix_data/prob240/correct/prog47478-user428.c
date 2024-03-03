#include <stdio.h>
#include <stdlib.h>
int catalan( int n) {
    int a,s=0;
    if (n<2)return 1;
        for (a=0 ; a <n ; a++)
        s= s + catalan (n-a-1)*catalan(a);
        return s; }
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
          printf("%d\n", catalan(c)); }
	return 0; }