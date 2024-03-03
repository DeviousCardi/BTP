#include <stdio.h>
int chk(int s[], int N, int S, int index, int sum){
    if(index==N) return 0;
    if(sum==S) return 1;
    return chk(s, N, S, index+1, sum+s[index])||chk(s, N, S, index+1, sum); }
int main() {
    int N, S, i, p;
    scanf("%d %d\n", &N, &S);
    int s[N];
    for(i=0; i<N; i++){
        scanf("%d", &s[i]); }
    p=chk(s, N, S, 0, 0);
    if(p==1) printf("YES");
    else printf("NO");
    return 0; }