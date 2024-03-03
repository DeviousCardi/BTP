#include <stdio.h>
int main() {
    int n,i,max,min;
    scanf("%d",&n);
    int amt[n];
    for(i=0;i<n;i++)
    {scanf("%d",&amt[i]);}
    max=amt[0];
    min=amt[0];
    for(i=1;i<n;i++)
    {if(amt[i]>max)
    max=amt[i];
    else if(a[i]<min)
    min=amt[i]; }
    printf("%d %d",max,min);
    printf("end");
    return 0; }