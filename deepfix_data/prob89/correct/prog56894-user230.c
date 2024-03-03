#include <stdio.h>
int main(){
    int l,n;
    scanf("%d%d",&l,&n);
    int arr[n],i,j;
    for( i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int flag=0;
    for(i=0;i<n;i++) {
        for( j=i+1;j<n;j++) {
              if((arr[i]+arr[j])==l)
              {  printf("lucky");
                 flag=1; } } }
    if(flag==0)
     printf("unlucky");
    return 0; }