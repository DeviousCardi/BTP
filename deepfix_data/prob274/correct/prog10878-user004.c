#include <stdio.h>
int main(){
    int a,n,i,j=1,k;
    int array[1000];
    int dir[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i+1]); }
    for(j=0;j<=n;j++){
        dir[0]=1;
        a=dir[j-1];
        dir[j]=array[a];
        j++;
        printf("%d",dir[j]); }
    return 0; }