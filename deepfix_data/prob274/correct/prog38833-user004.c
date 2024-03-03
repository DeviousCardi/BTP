#include <stdio.h>
int main(){
    int n,i,j=1,k;
    int array[1000];
    int dir[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i+1]); }
    dir[0]=1;
    for(j=0;j<n;j++){
        dir[j+1]=array[dir[j]]; }
    for(i=0;i<100;i++){
        for(k=0;k<=100;k++){
            if(dir[i]==dir[i-k]){
            printf("%d\n",k);
            printf("%d",i+k);
            break; } } }
    return 0; }