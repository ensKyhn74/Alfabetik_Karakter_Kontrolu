#include <stdio.h>
// klavyeden girilen karakter alfabetik mi değil mi?

int main() 

{
 
 char ch;
  
 printf("Bir karakter girin: ");
 scanf("%c",&ch);
 
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    
  printf("%c alfabe karakteri.",ch);
     
 else
    
  printf("%c alfabe karakteri degil.",ch);

  return 0;

}
