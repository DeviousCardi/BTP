#include <stdio.h>
int main() {
    int room, heap, gold, sum, max;
    scanf("%d %d\n", &room, &heap);
    max=0;
    for(int i=1;i<=room;i++){
        sum=0;
        for(int j=1;j<=heap;j++){
            scanf("%d", &gold);
            sum=sum+gold; }
        if(max<sum)
            max=sum; }
    printf("%d",sum);
    return 0; }