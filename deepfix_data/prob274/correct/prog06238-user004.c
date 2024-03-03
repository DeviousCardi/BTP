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
        printf("a%d\n",array[j]);
        dir[j]=array[dir[j-1]];
        printf("%d",dir[j]); }
    return 0; }