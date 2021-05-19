#include <stdio.h>
#include <stdlib.h>

int main (){
   int a[11] = {'_','_','_','_','O',' ','W','O','R','L','D'};
   int contador = 0;
   float letter = 0;
   int* p = &a;

   letter = 10.28571428;
   letter = letter*7;
   *(p) = letter;

   letter = 9.857142857;
   letter = letter*7;
   *(p+1) = letter;

   letter = 10.857142857;
   letter = letter*7;
   *(p+2) = letter;

   *(p+3) = letter;


   while (contador <= 10){      
      //printf("Contador: %d \n",contador);
      printf("%c - ",*(p+contador));
      printf("%d \n",*(p+contador));           
      //printf("Endereço %d \n",(p+contador));      
      contador+=1;
   }
   printf("\n");

   //printf("%d \n",sizeof(int));
         
   }
