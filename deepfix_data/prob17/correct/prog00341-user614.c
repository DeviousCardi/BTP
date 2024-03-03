#include <stdio.h>
int main(){
    int n1, array1[n1], n2, array2[n2];
    scanf("%d", &n1);
    for (int i=0; i<n1; i++) {
        scanf("%d", &array1[i]); }
    scanf("%d", &n2);
    for (int i=0; i<n2; i++) {
        scanf("%d",&array2[i]); }
    for (int i=0; i<n1; i++) {
        if (array1[i]== array2[0]) {
            int j;
            for(j=i; j<i+n2; j++) {
                if (array1[j]!= array2[j-i]) break; }
            if (j!=i+n2) {
                printf("NO");
                break; } } }
    return 0; }