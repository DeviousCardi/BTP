#include <stdio.h>
int main(){
    int n,i,t,k;
    scanf("%d",&n);
    int rno[100];
    int trav[100];
    rno[0]=0;
    for(i=1;i<=n;i++)
    scanf("%d",&rno[i]);
     for(i=0;i<100;i++)
    trav[i]=0;
    for(i=1;trav[rno[i]]!=3;i++)
    {trav[rno[i]]++;
        if(trav[rno[i]]==2)
    t=i;
        if(trav[rno[i]]==3)
        {k=i-t; } }
    printf("%d %d",t,k);
    return 0; }