#include <stdio.h>
int sum(float arr[],float N,float S){
   for(int i=0;i<N;i++){
       if(arr[i]==S)
       return 1;
       else
       return(arr,N-1,S) } }
int main() {
    float S;
    float N;
    scanf("%f%f",&N,&S);
    float a[N];
    for(int i=0;i<N;i++)
    scanf("%f",&a[i]);
    sum(a,N,S);
    return 0; }