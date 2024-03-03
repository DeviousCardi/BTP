#include <stdio.h>
int main(){
    int n,i;
    int count;
    scanf("%d\n",&n);
         int aro[n+1];
         aro[0]=1;
         for(i=1;i<=n;i++)
         aro[i] = i;
         int arr2[n];
         for(i=0;i<n;i++)
         scanf("%d",&arr2[i]);
         count = 0;
         for(i=1;i<=n;i++)
          aro[i]=aro[arr2[i]];
          for(i=0;i<=n;i++)
        {if(aro[arr2[i]]!=aro2[i])
        { count=count+1; }
        else {break; } }
        printf("%d ",count);
        printf("%d",count-1);
    return 0; }