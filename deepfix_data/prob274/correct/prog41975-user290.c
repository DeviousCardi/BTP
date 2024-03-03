#include <stdio.h>
int main(){
    int n,i,current,count;
    int rooms[100],traversed[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&rooms[i]); }
    current = rooms[0];
    count = 0;
    while(1){
        traversed[count] = current;
        current = rooms[current];
        for(i=0;i<count;i++){
            if(current == traversed[i]){
                break; } }
        count++; }
    printf("%d ", count);
    printf("%d",count-i);
    return 0; }