#include <stdio.h>
int main(){
    int book[100];
    int r[100];
    int a[100];
    int n;
    scanf ("%d\n", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &book[i]);
    for (int i=0;i<n;i++)
        scanf("%d", &r[i]);
    for (int i=0;i<n;i++){
        a[r[i]]=book[i]; }
    for (int i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("end");
    return 0; }