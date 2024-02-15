#include <stdio.h>
int main() {
//é necessário inserir o cpf com os pontos entre os números. Exemplo 000.000.000.00
int b1, b2, i, a1, a2;
char c[15];
  while(scanf(" %s", c) != EOF){
    b1 = 0;
    b2 = 0;
    a1 = 1;
    a2 = 9;
    for(i = 0; i < 11; i++){
      if(c[i] != '.' && c[i] != '-'){
        b1 += (c[i]-'0') * a1;
        a1++;
        b2 += (c[i]-'0') * a2;
        a2--;
      }
    }
    b1 = b1 % 11;
    b2 = b2 % 11;
    if(b1 == 10){
      b1 = 0;
    }
      if(b2 == 10){
        b2 = 0;
      }
    if(b1 == (c[12] - '0') && b2 == (c[13] - '0')){
      printf("CPF valido\n");
    }
    else{
      printf("CPF invalido\n");
    }
  }



return 0;
}
