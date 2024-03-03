#include <stdio.h>
int main() {
    int array[10000],temp, size, i, largest, smallest, largest_index, smallest_index;
    scanf("%d", &size);
    printf("%d", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    largest = array[0];
    for (i = 1; i < size; i++) {
        if (largest < array[i]){
            largest = array[i];
            largest_index = i; } }
    for (i = 1; i < size; i++) {
        if (smallest > array[i]){
            smallest = array[i];
            smallest_index = i; } }
    for
    (temp=array[largest_index];
    array[largest_index]=array[smallest_index];
    array[smallest_index]=temp)
    printf("end");
    return 0; }