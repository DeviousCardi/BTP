#include <stdio.h>
int main(){
    int n,d=1,dis;
    scanf("%d\n",&n);
    int a=2*n;
    int gtno[a];
    for(int i=0;i<a;i++)
    scanf("%d ",&gtno[i]);
    for(int j=0;j<n,j++){
        for(int x=n;x<2*n;x++){
        if(gtno[j]==gtno[x])
        dis=n-x;
        if(dis<d)
        dis=d; } }
    printf("%d",dis);
    return 0; }