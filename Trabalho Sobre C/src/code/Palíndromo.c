#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindromo(char entrada[], int index);

int main()
{
    char entrada[1000];
    bool notFim;

    do{
   	 scanf(" %[^\n]", entrada);
   	 notFim = strcmp(entrada, "FIM");
    
   	 if(notFim) //Se entrada for diferente de FIM, a execucao continua
   	 {
    
    
   		 if(isPalindromo(entrada, 0))
   		 {
   			 printf("SIM\n");
   		 }
   		 else
   		 {
   			 printf("NAO\n");
   		 }
   	 }
    }while(notFim);
    return 0;
}

bool isPalindromo(char entrada[], int index)
{
    bool is_palindromo = true;
    if(index < strlen(entrada)/2)
    {
   	 if(entrada[index] == entrada[strlen(entrada) - 1 - index])
   	 {
   		 is_palindromo = isPalindromo(entrada, index + 1);
   	 }
   	 else
   	 {
   		 is_palindromo = false;
   	 }
    }
    return is_palindromo;
}

