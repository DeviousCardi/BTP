#include <stdio.h>
int main(){
    int i,j,n,k,s;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i];) }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        {  s=-1;
            if((a[i]+a[j])==k) {
                s++;
                printf("lucky");
                break; } }
        if(s>0)
            break; }
    if(s==-1)
     printf("unlucky");
    return 0; }