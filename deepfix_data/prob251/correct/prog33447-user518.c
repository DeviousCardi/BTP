#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int i;
    static int count = 0;
    if(m == 3){
        if(x > 5){
            printf("%d x i i\n", x);
            getways(x-5, 3); }
        else{
            printf("%d %d x i e\n", count, x);
            return count + getways(x, 2); } }
    else if(m == 2){
        if(x > 3){
            int j = x/3;
            static int temp;
            temp = j;
            printf("%d x ie i\n", x);
            for(i = 0; i < temp; i++){
                getways(x-3, 2); } }
        else{
            printf("%d %d x ie e\n", count, x);
            return count + getways(x, 1); } }
    else if(m == 1){
        if(x != 1){
            static int temp1;
            temp1 = x;
            printf("%d x iee i\n", x);
            for(i = 0; i < x; i++){
                getways(x, 1); } }
        else{
            printf("%d %d x iee e\n", count, x);
            return count + 1; } }
    return count; }
int main() {
    int n;
    scanf("%d", &n);
    int c5 = n/5;
        printf("%d", getways(n, 3));
    return 0; }