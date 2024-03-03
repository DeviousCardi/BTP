#include <stdio.h>
#include <stdlib.h>
int main() {
         int ti;
         {scanf("%d",&ti);}
      if(ti<=200000)
          {printf("0.00");}
        else  if((ti>200000)&&(ti<=500000))
               {printf("%.2f",(ti-200000)*10.0/100);}
        else  if((ti>500000)&&(ti<=1000000))
               {printf("%.2f",((ti-500000)*20.0/100.0)+30000);}
        else
               {printf("%.2f",((ti-1000000)*30.0/100)+130000);}
	  return 0; }