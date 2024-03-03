#include <stdio.h>
int main() {
    int m,n,i,j,a,s,max;
    scanf("%d%d\n",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
    {   s=0;
        for(j=0;j<m;j++)
        { scanf("%d",&a);
                    s=s+a; } }
          arr[i]=s;
          max=arr[0];
          for(i=1;i<n;i++) {
            if(arr[i]>max)
            max=arr[i]; }
        printf("%d",max);
    return 0; }