#include <stdio.h>
#include <stdlib.h>
int n,i=0,j,l;
int *a;
int choc_alice=0,choc_bob=0;
int t_alice=0,t_bob=0;
void Alice(int i);
void Bob(int j);
void Alice (int i){
    if(i==j)return;
    while((t_alice<=t_bob)&&(i<j)){
        t_alice+=a[i];
        choc_alice++;
        i++; }
    return Bob(j); }
void Bob (int j){
    if(i==j)return;
    while((t_alice>=t_bob)&&(i<j)){
        t_bob+=a[j];
        choc_alice++;
        j--; }
    return Alice(i); }
int main() {
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(l=0;l<n;l++){
        scanf("%d",a[l]); }
    t_alice=a[i];
    t_bob=a[n-1];
    if(t_alice<=t_bob) Alice(1);
    else Bob(n-1);
    printf("%d %d",choc_alice,choc_bob);
	return 0; }