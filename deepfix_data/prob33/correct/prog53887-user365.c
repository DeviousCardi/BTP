#include <stdio.h>
int main(){
    int h;
    scanf("%d",&h);
    int p,i=0;
    scanf("%d",&p);
    int plat[p];
    for(i=0;i<=p;i++)
        scanf("%d",&plat[i]);
    for(i=1;h>0&&i<p;i++)
        if(plat[i]-plat[i-1]<0) h=h+plat[i]-plat[i-1];
    if(h>0) printf("Yes");
    else printf("No");
    return 0; }