#include <stdio.h>
int A[50];
int search(int query, int size) {
    for(int i=0;i<size;i++) {
        if(query==A[i])
            return 1; }
    return 0; }
int main() {
    int N, out=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
            scanf("%d", &A[i]);
            if(search(A[i], N)) {
                out=1;
                break; } }
    if(out)
        printf("YES");
    else
        printf("NO");
	return 0; }