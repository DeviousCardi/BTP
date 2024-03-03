#include <stdio.h>
int main(){
    int length[5]= {1, 2, 4, 5, 1};
    int frequency [100];
    for (int i=0; i<5; i++) {
        int num= length[i];
        frequency[num]++;
        printf("%d", frequency[num]); }
    printf("end");
    return 0; }