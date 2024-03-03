#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d\n",&n);
    int t=2*n,a[t];
    for(i=0;i<t;i++){
        scanf("%d ",&a[i]); }
    int dist[t];
    for(i=0;i<t;i++){
        dist[i]=199; }
    for(i=0;i<t;i++){
        for(j=i+1;j<t;j++){
            if(a[i]==a[j]){
                dist[i]=j-i;
                break; } } }
    int min=dist[0];
    for(i=1;i<t;i++){
        if(dist[i]<min){
            min=dist[i]; } }
    printf("%d",min);
    return 0; }