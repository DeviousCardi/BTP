#include <stdio.h>
int main(){
    int m,n,count;
    char YES,NO ;
    scanf("%d%d",&m,&n);
    count=0;
   { if(n%2==0){
        count=count+1; }
        else if(n%3==0){count=count+1; }
        else if(n%5==0){count=count+1 ; }
       else if(n%7==0){count=count+1 ; } }
       if(count==m){
        printf("%ch",YES); }
        else {printf("%ch",NO); }
    return 0; }