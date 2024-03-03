#include <stdio.h>
#include <stdlib.h>
int get_num(char c) {
    switch(c) {
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9; }
    return 0; }
void read_arr(char c[], int num[], int size) {
    int i;
    for(i=0; i<size; i++)
        num[i]=get_num(c[i]); }
int main() {
	return 0; }