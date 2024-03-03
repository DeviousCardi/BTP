#include <stdio.h>
int main(){
    int k,i,j,n,list[1000],flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&list[i]);
        for(j=0;j<i;j++) {
            if(k == list[i] + list[j]) {
                flag=1;
                break; } }
        if(flag==1)
                break; }
    if(flag==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }