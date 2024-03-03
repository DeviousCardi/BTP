#include <stdio.h>
int main(){
    int k;
    int n;
    scanf("%d\n%d",&k,&n);
    int s[100];
    int y;
    int i;
    for(i=0;i<n;i=i+1){
        scanf("%d",&s[i]); }
    for(i=0;i<n;i=i+1){
        for(y=0;y<n;y=y+1){
            if(s[i]+s[y]==k){
                printf("lucky"); } } }
    printf("unlucky");
    return 0; }