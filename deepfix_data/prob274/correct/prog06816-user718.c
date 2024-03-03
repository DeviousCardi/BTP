#include <stdio.h>
void read(int n, int a[]) {
    int i;
    for(i=1; i<n; i++)
        scanf("%d", &a[i]); }
void write(int n, int a[]) {
    int i;
    for(i = 1; i < n; i++)
        printf("%d\n", a[i]);
    printf("\n"); }
int main(){
    int n,i;
    scanf("%d", &n);
    int a[n+1];
    read(n+1,a);
    int c[n+1];
    int count = 0, room;
    for(i = 0; i <  n+1; i++)
        c[i] = 0;
    i = 0;
    room = 1;
    while( c[room] != 1) {
        c[room] = 1;
        room = a[room];
        i++; }
    printf("%d ", i);
    while( c[room] != 2) {
        c[room] = 1 + c[room];
        room = a[room];
        count++; }
    printf("%d", count);
    return 0; }