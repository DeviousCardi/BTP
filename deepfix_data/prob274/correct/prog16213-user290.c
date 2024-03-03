#include <stdio.h>
int main(){
    int n,i,j,current,count;
    int rooms[100],traversed[100];
    scanf("%d\n",&n);
    for(i=1;i<n;i++){
        scanf("%d",&rooms[i]); }
    traversed[1] = 1;
    for(i=2;i<2*n;i++){
        traversed[i] = rooms[traversed[i-1]]; }
    for(i=1;i<2*n;i++){
        for(j=1;j<i;j++){
            if(traversed[i] == traversed[j]){
                printf("%d ", i );
                printf("%d", i-j);
                return 0; } } }
    return 0; }