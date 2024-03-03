#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int cost[n];
    for(i=0;i<n;i++)
        {scanf("%d ",&cost[i]); }
    int count[100];
    for(i=0;i<100;i++)
        {count[i]=0;}
    for(i=0;i<n;i++)
        {count[cost[i]]=count[cost[i]]+1; }
    for(i=0;i<100;i++)
        {if(count[i]!=0)
            {for(j=0;j<count[i];j++)
                printf("%d ",i); } }
    printf("end");
    return 0; }