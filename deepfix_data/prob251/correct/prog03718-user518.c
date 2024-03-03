#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int i;
    static int count = 0;
    if(m == 3){
        if(x > 5){
            printf("i i\n");
            getways(x-5, 3); }
        else{
            printf("%di e\n", count);
            return count + getways(x, 2); } }
    else if(m == 2){
        if(x > 3){
            int j = x/3;
            static int temp;
            temp = j;
            printf("ie i\n");
            for(i = 0; i < temp; i++){
                getways(x-3, 2); } }
        else{
            printf("%d ie e\n", count);
            return count + getways(x, 1); } }
    else if(m == 1){
        if(x != 1){
            static int temp1;
            temp1 = x;
            printf("iee i\n");
            for(i = 0; i < x; i++){
                getways(x, 1); } }
        else{
            printf("%d iee e\n", count);
            return count + 1; } }
    return count; }
int main() {
    int n;
    scanf("%d", &n);
    int c5 = n/5;
        printf("%d", getways(n, 3));
    return 0; }