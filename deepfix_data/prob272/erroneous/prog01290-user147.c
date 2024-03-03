#include <stdio.h>
int main(){
    int tn,t1,t2;
    scanf("%d %d %d",&t1,&t2,&n);
    if(n>2)
    {tn=0;
    for(int i=3;i<=n;i++)
    {tn=t1+t2-2;
     t1=t2;
     t2=tn;
    }}
    else if(n==1)
    {tn=t1;}
    else
    tn=t2;
    printf("%d",tn);
    return 0; }