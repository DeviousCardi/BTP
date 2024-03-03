#include <stdio.h>
int main(){
    int k,n;
    int a[100];
    int flag=0;
    scanf("%d%d",&k,&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((a[i]+a[j])==k)
                flag=1; } }
    if(flag==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }