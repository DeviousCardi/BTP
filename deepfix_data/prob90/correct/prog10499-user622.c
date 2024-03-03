#include <stdio.h>
int main(){
    int k,i,value;
    int n;
int s[1000];
    scanf("%d%d",&k,&n);
for(i=0;i<n;i++)
    {scanf("%d",&s[i]);
    s[i]=value;}
 for(i=0;i<n;i++)
 {if(k==s[i]+s[k-i])
      {printf("lucky");
          break; }
      else{printf("unlucky");
             break;} }
    return 0; }