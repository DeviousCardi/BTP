#include <stdio.h>
int main(){int a,b,c,d; float e;
scanf("%i%i%i%i",&a,&b,&c,&d);
if(b!=d){e=((float)d-float(b))/((float)c-(float)a);
    printf("%2f",e);}
  else   if(b==d)printf("inf");
    return 0; }