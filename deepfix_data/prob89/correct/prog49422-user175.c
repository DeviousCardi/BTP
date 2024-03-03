#include <stdio.h>
int main(){
    int k,n,a[100],i,j,flag=0;
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if((a[i]+a[j])==k) {
                printf("lucky");
                flag=1;
                break; } }
       if(flag==1)
       break; }
    if(flag==0)
    printf("unlucky");
    return 0; }