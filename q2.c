#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char string[30], caractere;
  puts("digite uma string");
  gets(string);
  puts("informe um caractere");
  scanf(" %c", &caractere);
  for (int i = 0; i < strlen(string); i++) {
    if (caractere == string[i]) {
      puts("o caractere ta presente na string");
      break;
    }
    if (i == (strlen(string) - 1))
      puts("o caractere nao ta presenta na string");
  }
}