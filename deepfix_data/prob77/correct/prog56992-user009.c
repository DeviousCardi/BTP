#include <stdio.h>
int main() {
    int n,i,j,max,min,max_e,min_e;
    scanf("%d ",&n);
    int amt[n];
    for(i=0;i<n;i++)
    {scanf("%d ",&amt[i]);}
    max=amt[0];
    min=amt[0];
    for(i=1;i<n;i++)
    {if(amt[i]>max)
    {max=amt[i];
    max_e=i;} }
        amt[min_e]=max;
        amt[max_e]=min;
    for(j=0;j<n;j++)
    printf("%d ",amt[j]);
    printf("end");
    return 0; }