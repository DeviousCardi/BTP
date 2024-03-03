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
void IntMin(int a[], int length ) {
    for (int i=0; i<length; i++) {
        int j;
        for (j=i+1; j<length; j++) {
            if (a[i] > a[j]) break; }
        if (j==length) {
            printf("%d\n", a[i]);
            break; } } }
int main(){
    int a[5]= {3, 4, 6, 1, 2};
    IntMin(a, 5);
    printf("end");
    return 0; }