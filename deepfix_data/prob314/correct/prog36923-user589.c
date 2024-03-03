#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, test, j, k = 0, t;
    scanf("%d\n", &n);
    int input[n];
    for(i=0; i<n; i++) {
        scanf("%d\n", &input[i]); }
    scanf("%d\n", &test);
    while(k<test) {
          scanf("%d\n", &t);
          if(t == 0) {
                if(n == 1) {
                    printf("Yes\n"); }
              else
                if((input[t] < input[t+1])) {
                  printf("Yes\n"); }
                else
                  printf("No\n"); }
          else
          if(t == n-1) {
              if(input[t] < input[t-1]) {
                  printf("Yes\n"); }
              else
                  printf("No\n"); }
          else
            if((input[t] < input[t+1]) && (input[t] < input[t-1])) {
                printf("Yes\n"); }
            else
                printf("No\n");
        k++; }
	return 0; }