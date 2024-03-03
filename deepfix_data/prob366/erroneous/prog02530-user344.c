#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    int gate[2*n], dis[n], min=2*n;
    for(i=0; i<2*n; i++){
        scanf("%d", &gate[i]); }
    for(i=0; i<2*n; i++){
        for(j=0; j<2*n; j++){
            if(gate[i]==gate[j]){
                dis[i]=j-i;
                if((dis[i]>0)&&(dis[i]<min)) min=dis[i]; } } } }
    printf("%d", min);
    return 0; }