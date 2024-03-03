#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m == 3){
        if(x > 5){
            getway(x-5, 3); }
        else{
            getway(x, 2) } }
    else if(m == 2){
        if(x > 3){
            static int temp = x/3;
            for(i = 0; i < temp; i++){
                getway(x-3, 2); } }
        else{
            getway(x, 1); } }
    else if(m == 1){
        if(x != 1){
            static int temp1 = x;
            for(i = 0; i < x; i++){
                getway(x, 1); } }
        else{
            return 1; } } }
int main() {
    int n;
    scanf("%d", &n);
    int c5 = n/5;
        printf("%d", getway(n, 3));
    return 0; }