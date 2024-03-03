#include <stdio.h>
#include <stdlib.h>
int main() {
 int c1,size,arr[100],c2,peaks;
 for(c1=0;c1<size;c1++) {
     scanf("%d", &arr[c1]); }
 peaks = 0;
 for(c2=1;c2<(size-1);c2++) {
     if((arr[c2]>arr[c2-1])&&(arr[c2]>arr[c2+1]))
        peaks++; }
 printf("%d", peaks); }