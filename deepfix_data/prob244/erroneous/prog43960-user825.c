#include<stdio.h>
int main() {
    int amount;
    float tax;
    scanf("%d",&amount);
    if(amount<=200000)
       {tax=0;
        printf("%0.2f",tax);}
    else
      if(amount<=500000)
      {tax=float(amount-200000)*10/100;
      printf("%0.2f",tax);}
    else if (amount<=1000000) {tax=(30000+(amount-500000)*20/100); printf("%f",tax);}
          else printf("%0.2f",tax =130000+(amount-1000000)*30/100);
    return 0; }