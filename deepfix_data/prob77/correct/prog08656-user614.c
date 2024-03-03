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
void swap(int a[],int n_1, int n_2){
    int first= a[n_1];
    int second= a[n_2];
    a[n_1]= first;
    a[n_2]= second;
    printf("%d   %d", a[n_1], a[n_2]); }
int main (){
    int a[]= {3, 4, 2, 1, 6};
    swap(a, 0, 4);
    printf("end");
    return 0; }