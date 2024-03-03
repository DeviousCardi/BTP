#include <stdio.h>
int main(){
    int n;
    int y;
    int max;
    int i;
    scanf("%d",&n);
    int s[200];
    for(i=0;i<2*n;i=i+1){
        scanf("%d",&s[i]); }
    for(y=0;y<2*n;y=y+1){
        scanf("%d",&s[i+y]); }
    if(s[i]==s[i+y]){
        for(i=0;i<2*n;i+1){
            scanf("%d",y);
            if(max<y){
                max=y;}
                printf("%d",max);} }
    return 0; }