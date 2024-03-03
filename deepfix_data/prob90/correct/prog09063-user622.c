#include <stdio.h>
int main(){
    int k,i;
    int b1,b2;
    int n;
int s[1000];
    scanf("%d%d",&k,&n);
for(i=0;i<n;i++)
    {scanf("%d",&b1);
    s[i]=b1;}
    for(i=k-i;i<n;i++) {
     s[i]=b2;
     if(k==b1+b2)
         {printf("lucky");}
      else{printf("unlucky"); }
        break;}
    return 0; }