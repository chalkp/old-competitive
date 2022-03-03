#include <stdio.h>

int main() {
  int big=0, small=0;
  char input[10000];
  scanf("%s", input);
  int i=0;
  while(input[i] != '\0') {
		if(input[i] >= 'A' && input[i] <= 'Z') {
      big = 1;
    } else if(input[i] >= 'a' && input[i] <= 'z') {
      small = 2;
    }
    i++;
	}
  if(big+small == 1) {
    printf("All Capital Letter");
  } else if(big+small == 2) {
    printf("All Small Letter");
  } else {
    printf("Mix");
  }
  return 0;
}
