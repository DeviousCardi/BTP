#include <stdio.h>
int main() {
    int N1, N2, out=0;
    scanf("%d", &N1);
    int A1[N1];
    for(int i=0;i<N1;i++)
        scanf("%d", &A1[i]);
    scanf("%d", &N2);
    int A2[N2];
    for(int j=0;i<N2;i++)
        scanf("%d", &A2[i]);
    for(int i=0, j=0;i<N1;i++) {
        if(A1[i]==A2[j]) {
            j++;
            if(j==N2) {
                out=1;
                break; } }
        else
            j=0; }
    if(out==1)
        printf("YES");
    if(out==0)
        printf("NO");
    return 0; }