#include <stdio.h>
#include <stdlib.h>
void define_fibo(int array[20], int n, int lim) {
    if (n<lim) {
        array[n]=array[n-1]+array[n-2];
        printf("%d\n", array[n]);
        define_fibo(array, n+1, lim); } }
int search(int array[20], int x, int r) {
    if ((x<0)||(r==0)) return 0;
    else if (x==array[r-1]) return 1;
    else return search(array, x, r-1); }
int main() {
    int fibo[20], i, x;
    fibo[0]=0;
    fibo[0]=1;
    define_fibo(fibo, 2, 20);
    scanf("%d", &i);
    while(i!=0) {
        scanf("%d", &x);
        if (search(fibo, x, 20)) {
            printf("yes\n");
        } else {
            printf("no\n"); }
        i-=1; }
	return 0; }