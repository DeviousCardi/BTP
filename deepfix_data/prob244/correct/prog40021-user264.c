#include <stdio.h>
#include <stdlib.h>
int main() {
         int ti;
         {scanf("%d",ti);}
      if(ti<=200000)
          {printf("0");}
        else  if((ti>200000)&&(ti<=500000))
               {printf("%0.2f",ti*10/100);}
        else  if((ti>500000)&&(ti<=1000000) )
               {printf("%0.2f",ti*20/100+30000);}
        else
               {printf("%0.2f",ti*30/100+130000);}
	  return 0; }