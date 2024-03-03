#include <stdio.h>
void sort(int n, int a[]) {
    int temp, c;
    for(int j = 0; j < n-1; j++) {
        for(int i = 0; i < n - 1; i++) {
            if(a[i+1]<a[i]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp; } } } }
void print(int n, int a[]) {
    printf("\n");
    for( int i = 0; i < n; i++)
        printf("%d\n",a[i]);
    printf("\n"); }
int main() {
    int n, test, count;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[0]);
    for(int i = 1; i < n; i++)
        scanf(",%d", &a[i]);
    sort(n,a);
    test = 0;
    int hold;
    int i = 0;
    while(i < n) {
        hold = a[i];
        for(int j = 0; j < hold; j++) {
            if(a[i+j] != hold)
                test++;
            i++; } }
    if (test == 0)
        printf("Yes");
    else
        printf("No");
    return 0; }