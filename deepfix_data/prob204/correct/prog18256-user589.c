#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, k, count = 0;
    char arr[100];
    for(i=0; i<100; i++) {
        scanf("%c", arr[i]);
        count = count + 1; }
    if(count%2 != 0) {
        for(j=0; j<=(i-2)/2; j++) {
            if(arr[j] - '0' == arr[i-j] - '0')
            printf("YES");
            else
            printf("NO"); } }
    else {
        for(k=0; k<=(i-1)/2; k++) {
            if(arr[k] - '0' == arr[i-k] - '0')
            printf("YES");
            else
            printf("NO"); } }
	return 0; }