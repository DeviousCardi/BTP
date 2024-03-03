#include <stdio.h>
int check(int s[], int N, int S, int index, int sum){
    if(index==N-1) return 0;
    if(sum==S) return 1;
    return check(s, N, S, index+1, sum+s[index])||check(s, N, S, index+1, sum); }
int main() {
    int N, S, i, p;
    scanf("%d %d\n", &N, &S);
    int s[N];
    for(i=0; i<N; i++){
        scanf("%d", &s[i]); }
    p=check(s, N, S, 0, 0);
    if(p==1) printf("Yes");
    else printf("No");
    return 0; }