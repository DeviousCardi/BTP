#include <stdio.h>
int main() {
    int n,s[1000],max,min,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    min=s[0];
    for(i=1;i<n;i++)
    {if(s[i]<s[0])
    min=s[i]; }
    max=s[0];
    for(i=1;i<n;i++)
    {if(s[i]>s[0])
    max=s[i]; }
    for(i=0;i<n;i++)
    {printf("%d ",s[i]);
        if(s[i]==max)
    s[i]=min;
    if(s[i]==min)
    s[i]=max; }
    printf("end");
    return 0; }