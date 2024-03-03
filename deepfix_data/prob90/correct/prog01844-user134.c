#include <stdio.h>
int main(){
    int num[1000],i,k;
    for(i=0;i<1000;i++)
    {scanf("%d",&k);
    scanf("%d",&num[i]);
     k=num[i]+1;}
     if(k%2==1)
     {printf("lucky");}
     else
     printf("unlucky");
    return 0; }