#include <stdio.h>
int main(){
 int by, i ,rem,sum=0;
 scanf("%d",&by);
 while(by!=0) {
     rem=by%10;
     sum=sum+rem;
     by=by/10; }
 for(i=2016; ;i++) {
     if((i%sum)==0) {
        printf("%d",i);
        break; } }
    return 0; }