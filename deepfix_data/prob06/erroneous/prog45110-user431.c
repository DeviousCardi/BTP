#include <stdio.h>
#include <stdlib.h>
int num_equipped=0;
int sizes_used=0;
int n,m,x,y;
int does_it_fit(int size, int given_size) {
    if(given_size >= (size-x) && given_size <= (size+y))
        return 1;
    return 0; }
void equip(int *a, int *b, int *final) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(does_it_fit(a[i], b[j])) {
                final[i]=j;
                break; } } } }
int main() {
	scanf("%d %d %d %d", &n, &m, &x, &y);
    int a[n];
    int b[m];
    int final[n];
    int i;
    for(i=0;i<n;i++)
        final[i] = (-1);
    equip(a, b, n, m, final);
    for(i=0i<num_of_equipped;i++)
        printf("%d %d\n", i+1, final[i]);
	return 0; }