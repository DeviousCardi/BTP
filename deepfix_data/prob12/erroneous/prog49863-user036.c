#include <stdio.h>
int main(){
    int ticket;
    scanf("%d\n",&ticket);
    while(ticket){
        scanf("%d",&door);
        if(door==ticket){
            int count=1;
            while(count){
                scanf("%d",&door);
                if(door==ticket)break;
                count++; }
            printf("%d",count); }
        scanf("%d",&door); }
    return 0; }