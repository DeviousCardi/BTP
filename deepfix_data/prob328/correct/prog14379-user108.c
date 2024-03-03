#include <stdio.h>
#include <stdlib.h>
void define_fibo(int array[20], int n, int lim) {
    if(n<lim)
    array[n]=array[n-1]+array[n-2];
    define_fibo(array, n+1, lim); }
int search(int array[20], int x, int i) {
    if ((x<0)||(i==0)) {return 0;
        printf("No\n"); }
    else if (x==array[i-1]) {return 1;
        printf("Yes\n"); }
    else return search(array, x, i-1); }
int main() {
    int fibo[20], i, x;
    fibo[0]=0;
    fibo[0]=1;
    define_fibo(fibo, 2, 20);
    scanf("%d", &i);
    while(i!=0) {
        scanf("%d", &x);
        if (search(fibo, x, 20)==1) {
            printf("Yes\n");
        } else {
            printf("No\n"); }
        i-=1; }
	return 0; }