#include <stdio.h>
int main(){
    int s[1000];
    int k,i,value;
    scanf("%d",&k);
    for(i=0;i<1000;i++) {
        scanf("%d",&s[i]); }
    for(i=0;i<1000;i++)
    {if(k==s[i]+s[k]&&k%2==1)
    {printf("lucky");
    break; }
    else { printf("unlucky");}
    break; }
    return 0; }