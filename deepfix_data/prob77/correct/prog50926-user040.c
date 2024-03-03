#include <stdio.h>
int main() {
     int i;
     int array[1000],size,largest,lowest;
     scanf("%d" ,&size);
     for(i=2;i<=1000;i++)
     scanf("&d" ,array[i]);
    largest=array[0];
    for(i=1;i<size;i++) {
    if(largest<array[i])
    largest=array[i]; }
    printf("%d" ,largest);
    printf("end");
    return 0; }