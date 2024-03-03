#include <stdio.h>
int main(){
    int s[400];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d",&s[i]); }
    int m,o;
    int dist,min;
    min=400;
    for(m=0;m<2*n;m++){
        for(o=m+1;m<2*n;o++){
            if(s[m]==s[o]){
                dist= o-m;
                break; } }
        if(min>dist){
            min=dist; } }
    printf("%d",min);
    return 0; }