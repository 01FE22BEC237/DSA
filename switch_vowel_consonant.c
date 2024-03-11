#include <stdio.h>
#include <ctype.h>
int main ()
{
  char c,a,e,i,o,u;
  printf ("\nEnter charcter");
  scanf ("%c",&c);
  toupper(a),toupper(e),toupper(i),toupper(o),toupper(u);
  if(isalpha(c))
  {
   switch(c)
   {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U': printf("Vowel");
                     break;
             default:printf("Consonant");
    }
   }
   else
     printf("invalid");
return 0;
}
