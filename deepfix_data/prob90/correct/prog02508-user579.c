#include <stdio.h>
int main(){
    int c=0,i,n,k,list[100000],b[500];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
    for(i=0;i<500;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    b[list[i]]++;
    for(i=0;i<n;i++) {
        if(b[list[i]]!=0 && b[list[k-i]]!=0)
        c++; }
    if(c==0)
    printf("unlucky");
    else
    printf("lucky");
return 0; }