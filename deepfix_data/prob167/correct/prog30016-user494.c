#include<stdio.h>
int count=0,N;
double sum=0;
void int_sum() {
    if(count==N) {
        return; }
    int x;
    scanf("%d",&x);
    sum=sum+x;
    count++;
    int_sum();
    return; }
int main() {
    scanf("%d",&N);
    int_sum();
    printf("%.0lf",sum);
    return 0; }