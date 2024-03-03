#include <stdio.h>
int main(){
    int s[1000];
    int k,n,i,value;
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&value);
        s[i]=value; }
    for(i=0;i<n;i++)
    {if(k==s[i]+s[k])
    {printf("unlucky");
        break; }
    else { printf("lucky");}
          break;}
    return 0; }