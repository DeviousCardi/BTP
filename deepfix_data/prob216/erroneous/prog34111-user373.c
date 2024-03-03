#include <stdio.h>
#include <stdlib.h>
int fibo(int prev_num, int number){
    static int i = 1;
    int next_num;
    if (i==size)
    return (0);
    else {
        next_num = prev_num + number;
        prev_num = number;
        number = next_num;
        printf("%d", next_num);
        i++;
        fibo(prev_num, number): }
        return (0) ; }
int main() {
    int size;
    scanf("%d",&size);
    printf("1 ");
    fibo(prev_num, number);
	return 0; }