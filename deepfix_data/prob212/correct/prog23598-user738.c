#include <stdio.h>
int main(){
 int n,y,i,rem,sum=0,p,temp;
 scanf("%d",&n);
 temp=n;
 while(n!=0) {
     rem=n%10;
     sum=sum+rem;
     n/=10; }
 printf("%d\n",sum);
  if(temp%sum==0)
        printf("%d",temp);
  else {
        p=temp/sum;
        while(p*sum<2016) {
            p=p+1; }
        printf("%d",p*sum); }
    return 0; }