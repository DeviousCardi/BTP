#include <stdio.h>
int main(){
    int k,n;
    scanf("%d %d",&k,&n);
    int list[n];
    for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
    int bool1=0;
    int bool2=0;
    for(int j=0;j<=k;j++) {
        for(int m=0;m<n;m++) {
            if(list[m]==j)
                bool1=1;
            if(list[m]==k-j)
                bool2=1; }
        if(bool1==1 && bool2==1)
            break; }
    if(bool1==1 && bool2==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }