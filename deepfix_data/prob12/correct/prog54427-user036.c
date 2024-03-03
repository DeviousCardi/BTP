#include <stdio.h>
int main(){
    int ticket,door,count;
    scanf("%d\n",&ticket);
    for(int i=0;i<=2*ticket;i++){
        scanf("%d",&door);
        if(door==ticket){
            count=1;
            while(count){
                scanf("%d",&door);
                if(door==ticket){
                    goto f1; }
                count++; } } }
    f1:printf("%d",count);
    return 0; }