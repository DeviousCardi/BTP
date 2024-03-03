#include<stdio.h>
int main() {
    int n,i,j,ar[20],count[20]={0},max;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[n]);
    for(i=0;i<n;i++)
        {for(j=i+1;j<n;j++)
            {if(ar[i]>ar[j])
                count[i]=count[i]+1;}}
    max=count[0];
    printf("%d ",max);
    for(i=0;i<n;i++)
        {if(count[i]>max)
            max=count[i];}
    printf("%d",max);
    return 0; }