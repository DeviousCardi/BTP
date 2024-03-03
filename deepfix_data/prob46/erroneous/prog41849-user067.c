#include <stdio.h>
int main(){
 int n,m,i,count;
 count=0;
 scanf("%d%d",&n,&m);
 for(i=2;i<m-1;i=i+1)
if(m%i==0)
 {count=count+1;}
 if(count==0)
{ printf("yes"");}
 else{printf("no");}
    return 0; }