// CODE BY pedroGeometrias
// ID -> 2936
#include <stdio.h>

int main(void) {
  int A=0, B=0, C=0, D=0, E=0, F=0;
  scanf("%i%i%i%i%i", &A, &B, &C, &D, &E);
  if(A>=0){
  A *= 300;}
  else{
  A = 0;
  }
  if(B>=0){
  B *= 1500;}
  else{
  B = 0;
  }
  if(C>=0){
  C *= 600;}
  else{
  C = 0;
  }
  if(D>=0){
  D *= 1000;}
  else{
  D = 0;
  }
  if(E>=0){
  E *= 150;}
  else{
  E = 0;
  }
  F = 225+A+B+C+D+E;
  printf("%d\n", F);
  return 0;
}
