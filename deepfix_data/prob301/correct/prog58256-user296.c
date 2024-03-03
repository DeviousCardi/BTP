#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,num,i,j;
    scanf("%d",&n);
    int s[n];
    scanf("%d",&num);
    for(i=0;i<n;i=i+1)
    {s[i]=num;
    for(j=0;j<n;j++)
    { s[j]=num;
    while(i!=j)
    if(s[i]==s[j])
    printf("%d",s[i]);
        scanf("%d",&s[j]); }
     scanf("%d",&s[i]); }
	return 0; }