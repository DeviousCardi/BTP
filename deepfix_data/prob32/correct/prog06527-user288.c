#include <stdio.h>
#include <stdlib.h>
int main() {
int i,num[10];
for(i=0;i<=20;i++){
    scanf("%d",&num[i]);
    } if((i>=1)&&(num[i]<num[i-1]))
     {printf("Yes");
     }else if((i<=20)&&(num[i]<num[i+1]))
     {printf("Yes");
     }else
     {printf("No"); }
    return 0; }