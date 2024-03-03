#include <stdio.h>
int main(){
    int n,i,current,count;
    int rooms[100],traversed[100];
    scanf("%d\n",&n);
    for(i=1;i<n;i++){
        scanf("%d",&rooms[i]); }
    current = rooms[1];
    count = 2;
    traversed[1] = 1;
    while(1){
        traversed[count] = current;
        for(i=1;i<count;i++){
            if(current == traversed[i]){
                printf("%d ", count -1);
                printf("%d",count - i);
                return 0; } }
        count++;
        current = rooms[current]; }
    return 0; }