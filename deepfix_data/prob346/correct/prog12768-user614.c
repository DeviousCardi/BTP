#include <stdio.h>
int main(){
    int price[5]= {1, 2, 4, 5, 1};
    int frequency [100];
    for (int i=0; i<100; i++) {
        frequency[i]= 0; }
    for (int i=0; i<5; i++) {
        int num= price[i];
        frequency[num]++; }
    for (int i=0; i<100; i++) {
        int j=1;
        while (j<=frequency[i]) {
            printf("%d ", i); } }
    printf("end");
    return 0; }