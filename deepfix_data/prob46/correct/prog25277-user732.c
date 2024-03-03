#include <stdio.h>
int main(){
    int m,n,i,count;
    scanf("%d%d",&m,&n);
    count=0;
    {for(i=1;i<=n;i=i+1){
       if( n%i==0)
        count=count-2 ;}
      } if(count==m){
        printf("YES"); }
       else {printf("NO"); }
    return 0; }