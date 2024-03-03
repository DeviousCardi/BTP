#include <stdio.h>
int main(){
    int m,n,count;
    scanf("%d%d",&m,&n);
    count=0;
   { if(n%2==0){
        count=count+1; }
        else if(n%3==0){count=count+1; }
        else if(n%5==0){count=count+1 ; }
       else if(n%7==0){count=count+1 ; }
        m==count ;
        printf("%d",m); }
    return 0; }