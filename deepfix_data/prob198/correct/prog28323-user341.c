#include <stdio.h>
#include <stdlib.h>
int A2[20];
int isnt_in_A2(int a, int N2) {
    for(int i=0;i<N2;i++)
        if(a==A2[i])
            return 0;
    return 1; }
int main() {
	int N1, N2, min, out=0;
    scanf("%d", &N1);
    int A1[N1];
    for(int i=0;i<N1;i++)
        scanf("%d", &A1[i]);
    scanf("%d", &N2);
    for(int j=0;j<N2;j++)
        scanf("%d", &A2[j]);
    min=A1[0];
    if(isnt_in_A2(A1[0], N2))
        out=1;
    for(int i=1;i<N1;i++) {
        if(A1[i]<min&isnt_in_A2(A1[i], N2)) {
            min=A1[i];
            out=1; } }
    if(out)
        printf("%d", min);
    else
        printf("NO");
	return 0; }