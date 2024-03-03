#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
         if(a <= b){
           if(b<=c)
            printf("second largest=%d",b);
      } else
           if (b<=c)  {
              if (c<=a)
            printf("second largest=%d",c); }
        else {
            if(c<=a)  {
                if(a<=b)
             printf("second largest=%d",a); } }
	return 0; }