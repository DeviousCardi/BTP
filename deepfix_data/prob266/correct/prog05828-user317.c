#include <stdio.h>
int main(){
 int n,s=0,l=0,p=2016;
 scanf("%d",&n);
    while(n!=0){
        s=n%10;
        n/=10; }
    printf("%d\n",s);
    while(l==0){
       if(p%s==0){
           l=1;
           printf("%d",p);
           break; }
       else p++; }
    return 0; }