#include <stdio.h>
int main(){
    int s[1000];
    int k,n,i,value;
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&value);
        s[i]=value; }
    for(i=0;i<n;i++)
    {if(k==s[i]+s[k]&&k%2==1)
    {printf("lucky"); }
    else { printf("unlucky");} }
    return 0; }