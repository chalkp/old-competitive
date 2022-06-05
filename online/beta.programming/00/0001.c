#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  a+=b;
  scanf("%d", &b);
  a+=b;
  if(a<50) {
    printf("F");
  } else if(a<55) {
    printf("D");
  } else if(a<60) {
    printf("D+");
  } else if(a<65) {
    printf("C");
  } else if(a<70) {
    printf("C+");
  } else if(a<75) {
    printf("B");
  } else if(a<80) {
    printf("B+");
  } else {
    printf("A");
  }
  return 0;
}
