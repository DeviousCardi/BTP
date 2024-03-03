#include <stdio.h>
int main(){
    int n1, n2;
    scanf("%d", &n1);
    int array1[n1];
    for (int i=0; i<n1; i++) {
        scanf("%d", &array1[i]); }
    scanf("%d", &n2);
    int array2[n2];
    for (int i=0; i<n2; i++) {
        scanf("%d",&array2[i]); }
    int count=0;
    for (int i=0; i<n1; i++) {
        if (array1[i]== array2[0]) {
            int j;
            for(j=i; j<i+n2; j++) {
                if (array1[j]!= array2[j-i]) break; }
            if (j!=i+n2) {
                printf("NO");
                break; }
            else {printf("YES"); count++; break;} } }
    if (count==0) {printf("NO");}
    return 0; }