#include <stdio.h>
int main(){
    int n;
    int y;
    int x;
    int i;
    scanf("%d",&n);
    int s[200];
    for(i=0;i<2*n;i=i+1){
        scanf("%d",&s[i]); }
    for(y=0;y<2*n;y=y+1){
        scanf("%d",&s[i+y]); }
    for(x=0;x<2*n;x=x+1){
        scanf("%d",x);
    }if(x>y){printf("%d",x);}
    else printf("%d",y);
    return 0; }