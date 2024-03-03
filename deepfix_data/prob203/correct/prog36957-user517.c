#include <stdio.h>
int main() {
    int N,i,flag=0,j=0,k=0,x,y;
    int a[50];
    scanf("%d\n",&N);
        for(i=0;i<N;i++){
            scanf("%d ",&a[i]); }
    for(j=0;j<N;j++){
        x=a[j];
        for(k=j+1;k<N;k++){
            y=a[k];
            if(x==y){
                printf("YES");
                return 0; } } }
    if(flag==0)
    printf("NO");
	return 0; }