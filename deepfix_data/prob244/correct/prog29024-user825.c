#include<stdio.h>
int main() {
    int amount;
    float tax;
    scanf("%d",&amount);
    if(amount<=200000)
       {tax=0;
        printf("%f",tax);}
    else
      if(amount<=500000)
      {tax=(amount)*10/100;
      printf("%f",tax);}
    else if (amount<=1000000) {tax=30000+(amount)*20/100; printf("%f",tax);}
          else printf("%f",tax =130000+(amount)*30/100);
    return 0; }