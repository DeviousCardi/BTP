#include <stdio.h>
#include <stdlib.h>
int IndexIntMax(int a[], int length ) {
    for (int i=0; i<length; i++) {
        int j;
        for (j=i+1; j<length; j++) {
            if (a[i]< a[j]) break; }
        if (j==length) {
            return i;
            break; } } }
int IndexIntMin(int a[], int length ) {
    for (int i=0; i<length; i++) {
        int j;
        for (j=i+1; j<length; j++) {
            if (a[i] > a[j]) break; }
        if (j==length) {
            return i;
            break; } } }
void swap(int a[],int n_1, int n_2){
    int first= a[n_2];
    int second= a[n_1];
    a[n_1]= first;
    a[n_2]= second; }
int main (){
    int a[]= {3, 4, 2, 1, 6};
    int n_1= IndexIntMax(a, 5);
    int n_2= IndexIntMin(a,5);
    swap(a,n_1, n_2);
    for (int i=0; i<5; i++) {
        printf("%d ", a[i]); }
    printf("end");
    return 0; }