#include <stdio.h>
int main(){
    int k,n;
    scanf("%d %d",&k,&n);
    int list[n];
    for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
    int bool=0;
    for(int j=0;j<n;j++) {
        for(int m=0;m<n;m++) {
            int add=list[j]+list[m];
            if(add==k)
                bool=1; } }
    if(bool==1)
        printf("lucky");
    if(bool==0)
        printf("unlucky");
    return 0; }