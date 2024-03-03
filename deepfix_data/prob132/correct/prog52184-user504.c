#include <stdio.h>
int main() {
    int n,i=0,j=0,count=0;
     scanf("%d",&n);
    int array[n];
    char arg[n];
    while(i<n) {
      scanf("%d",&array[i]);
      scanf("%c",arg);
        i++; }
    i=0;
    while(i<n) {
        count=0;
        j=0;
        while(j<n) {
           if(array[i]==array[j])
           count=count+1;
            j++; }
        if(array[i]!=count) {
            printf("No");
            break; }
        i++; }
    return 0; }