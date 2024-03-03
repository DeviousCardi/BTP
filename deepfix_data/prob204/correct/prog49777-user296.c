#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int s[100];
    int i,sum=1;
    for(i=0;i<x;i++) {
    sum=sum*10; {
       if(x/sum==0)
    break;
   } printf("%d",sum/10); }
    s[0]=x/10000;
    s[1]=x/1000-s[0]*10;
    s[2]=x/100-s[0]*100-s[1]*10;
    s[3]=x/10-s[0]*1000-s[1]*100-s[2]*10;
    s[4]=x-s[0]*10000-s[1]*1000-s[2]*100-s[3]*10;
    if((sum/10)*s[4]+(sum/100)*s[3]+(sum/1000)*s[2]+(sum/10000)*s[1]+(sum/10000)*s[0]==x)
    printf("Yes");
    else
    printf("No");
return 0; }