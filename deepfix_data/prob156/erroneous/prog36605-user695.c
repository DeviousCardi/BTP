#include <stdio.h>
int main() {
   int doors,heaps,i,sum=0;
   scanf("%d",&doors);
    scanf("%d",&heaps);
    for(door=0;door<doors;door++) {
       max=sum;
        for(heap=0;heap<heaps;heap++) {
            scanf("%d",&heap);
            sum=sum+heap; }
    if(sum>max) {
            max=sum; } }
    printf("%d",max);
    return 0; }