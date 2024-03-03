#include <stdio.h>
int main(){
    int book[100];
    int r[100];
    int n;
    scanf ("%d\n", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &book[i]);
    for (int i=0;i<n;i++)
        scanf("%d", &r[i]);
    for (int i=0;i<n;i++){
        book[i]=book[r[i]]; }
    for (int i=0;i<n;i++)
        printf("%d ", book[i]);
    printf("end");
    return 0; }