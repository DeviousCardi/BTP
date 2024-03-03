#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d %d",&n,&k);
    int input[n];
    for(i=0;i<n;i++)
        {scanf("%d ",&input[i]); }
    int count[k];
    for(i=0;i<k;i++)
        {count[i]=0;}
    for(i=0;i<n;i++)
        {count[input[i]]=count[input[i]]+1; }
    for(i=0;i<k;i++)
        {if(count[i]!=0)
            {for(j=0;j<count[i];j++)
                printf("%d ",i); } }
    return 0; }