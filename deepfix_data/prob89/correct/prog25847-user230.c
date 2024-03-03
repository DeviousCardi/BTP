#include <stdio.h>
int main(){
    int l,n;
    scanf("%d %d",&l,&n);
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
              if(arr[i]+arr[j]==l)
              {  printf("lucky");
                 flag=1;
                 break; } }
    if(flag==1)
        break; }
    if(flag==0)
     printf("unlucky");
    return 0; }