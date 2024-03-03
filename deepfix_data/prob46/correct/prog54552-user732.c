#include <stdio.h>
int main(){
    int m,n,i,count;
    char YES,NO ;
    scanf("%d%d",&m,&n);
    count=0;
    for(i=1;i<=n;i=i+1){
        n%i==0 ;
        count=count-2 ;}
       if(count==m){
        printf("%ch",YES); }
        else {printf("%ch",NO); }
    return 0; }