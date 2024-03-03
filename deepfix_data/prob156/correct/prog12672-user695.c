#include <stdio.h>
int main() {
   int doors,heaps,sum=0,max,door,heap;
   scanf("%d %d",&doors,&heaps);
    for(door=0;door<doors;door++) {
       max=sum;
        for(heap=0;heap<heaps;heap++) {
            scanf("%d",&heap);
            sum=sum+heap; }
    if(sum>max) {
            max==sum; } }
    printf("%d",max);
    return 0; }