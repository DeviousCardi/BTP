#include <stdio.h>
int main() {
    int array[10000], size, i, largest;
    scanf("%d", &size);
    printf("%d", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    largest = array[0];
    for (i = 1; i < size; i++) {
        if (largest < array[i])
            largest = array[i]; }
    printf("%d", largest);
    printf("end");
    return 0; }