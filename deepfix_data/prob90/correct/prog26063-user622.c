#include <stdio.h>
int main(){
    int k,i,b1,b2;
    int value;
    int n;
int s[1000];
    scanf("%d%d",&k,&n);
for(i=0;i<n;i++)
    {scanf("%d",&value);
    s[i]=value;}
 for(i=0;i<n;i++)
    {i=k;
     s[i]=b1;
     i=k-i;
     s[i]=b2;
     if(k==b1+b2)
         {printf("lucky");
          break; }
      else{printf("unlucky");
             break;} }
    return 0; }