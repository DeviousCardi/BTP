#include <stdio.h>
void read(int a[], int n) {
    for( int i = 0; i < n; i++)
        scanf("%d,", &a[i]); }
void print(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\n", a[i]); }
int count(int a[], int b[], int n, int start, int check) {
    var = 0;
    for(int i = start; i < n; i++) {
        if(a[i] == check) {
            b[i] = 1;
            var++; } }
    return var; }
int main() {
    int n, test;
    scanf("%d", &n);
    int arr[n];
    int chk[n];
    for(int i = 0; i < n; i++)
        b[i] = 0;
    read( a, n);
    for(int j = 0; j < n; j++) {
        test = 0;
        if(b[i] != 1) {
            if (count(arr, chk, n, j, a[j]))!= a[j]) {
                test++;
                break; } } }
    (test == 0) ? printf("Yes"):printf("No");
    return 0; }