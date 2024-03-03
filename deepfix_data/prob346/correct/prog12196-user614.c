#include <stdio.h>
int main(){
    int length;
    scanf("%d", &length);
    int price[length];
    for (int i=0; i<length; i++) {
        scanf("%d", &price[i]); }
    int frequency [100];
    for (int i=0; i<100; i++) {
        frequency[i]= 0; }
    for (int i=0; i<length; i++) {
        int num= price[i];
        frequency[num]++; }
    for (int i=0; i<100; i++) {
        int j=1;
        while (j<=frequency[i]) {
            printf("%d ", i);
            j++; } }
    printf("end");
    return 0; }