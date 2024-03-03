#include <stdio.h>
#include <stdlib.h>
void IntMax(int a[], int length ) {
    for (int i=0; i<length; i++) {
        int j;
        for (j=i+1; j<length; j++) {
            if (a[i]< a[j]) break; }
        if (j==length) {
            printf("%d\n", a[i]);
            break; } } }
int main(){
    int a[10];
    for (int i=0; i<10; i++) {
        int x= rand();
        a[i]= x%10;
        printf("%d\t", a[i]); } }
    printf("end");
    return 0; }