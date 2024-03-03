#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	scanf("%d",&i);
	if (i<=200000){
	    printf("0.00");
	    }else if ((i>200000)&&(i<=500000))
	   {printf("%0.2f",0.1*(i-200000));
	}else if ((i>500000)&&(i<1000000))
	    {printf("%d",30000+(02*(i-500000)));
	   }else {printf("%0.2f", 130000+(0.3*(i-1000000)));}
	return 0; }