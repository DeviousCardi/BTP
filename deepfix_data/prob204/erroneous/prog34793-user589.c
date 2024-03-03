#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, count = 0;
    char arr[10000];
    for(i=0; i<10000, i++) {
        scanf("%c", arr[i]);
        count = count + 1; }
    if(count%2 != 0) {
        for(j=0; j<=(i-2)/2; j++) {
            if(arr[j] == arr[i-j])
            printf("YES");
            else
            printf("NO"); } }
    else {
        for(k=0; k<=(i-1)/2; k++) {
            if(arr[k] == arr[i-k])
            printf("YES");
            else
            printf("NO"); } }
	return 0; }