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
    int length;
    scanf("%d", &length);
      int a[length];
    for (int i=0; i<length; i++) {
        scanf("%d", &a[i]); }
    for (int i=0; i<length; i++) {
        printf("%d ", a[i]); }
    printf("end");
    return 0; }