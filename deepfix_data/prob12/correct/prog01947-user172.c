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
    for(m=0;m<2*n-1;m++){
        for(o=m+1;m<2*n;o++){
            if(s[m]==s[o]){
                dist= o-m;
                break; } }
        if(min>dist){
            min=dist; } }
    if(n!=0){
        printf("%d",min); }
    else {
        printf("%d",n); }
    return 0; }