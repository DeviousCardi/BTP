#include <stdio.h>
int main(){
    int k,i,g;
    int b1,b2;
    int n;
    scanf("%d%d",&k,&n);
    int s[n];
for(i=0;i<n;i++)
    {scanf("%d",&b1);
    s[i]=b1;
    i=k-i;
     scanf("%d",&b2);
     s[i]=b2;
     g=b1+b2;
         if(k=g){printf("lucky");}
             else{printf("unlucky");} }
return 0; }