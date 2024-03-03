#include <stdio.h>
#include <stdlib.h>
int a=0, b=0;
void findab(int *t, int n) {
    int timea=0, timeb=0, c1=0, c2=n-1;
    if(n==1)
    { a=1;
      return; }
    a=1;
    b=1;
    timea+=t[0]; timeb+=t[n-1];
    while(c1<c2)
        { if(timea<=timeb)
            { a++;
              timea+=t[++c1];
              continue; }
          b++;
          timeb+=t[--c2]; } }
int main() {
    int i, n, *t;
    scanf("%d", &n);
    t = (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
       scanf("%d", &t[i]);
    findab(t, n);
	printf("%d %d", a, b);
	return 0; }