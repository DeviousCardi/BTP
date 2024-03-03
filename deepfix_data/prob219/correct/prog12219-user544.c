#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
         if(c<b){
           if(b<a)
            printf("%d",b); }
            else
           if (a<c)  {
              if (c<b)
            printf("%d",c); }
        else {
            if(c<a)  {
                if(a<b)
             printf("%d",a); } }
	return 0; }