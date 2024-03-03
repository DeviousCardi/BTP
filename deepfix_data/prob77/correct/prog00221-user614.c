#include <stdio.h>
int main() {
    int a[5]= {3, 4, 6, 2, 1};
    for (int i=0; i<5; i++) {
        int j;
        for (j=i+1; j<5; j++) {
            if (a[i]< a[j]) break; }
        if (j==5) {
            printf("%d\n", a[i]);
            break; } }
    printf("end");
    return 0; }