#include <stdio.h>
int main(){
    int ticket,door;
    scanf("%d\n",&ticket);
    for(int i=0;i<=199;i++){
        scanf("%d",&door);
        if(door==ticket){
            int count=0;
            while(count){
                scanf("%d",&door);
                if(door==ticket){
                    printf("%d",count);break; }
                count++; } } }
    return 0; }