//moustapha abdoussalam zara
# include <stdio.h>
# include <cs50.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main(int argc, string argv [])
{
     if (argc==2)
     {

         string moustapha;
         int k = atoi(argv[1]);

         moustapha= get_string("plaintext:");

         printf ("cyphertext:/");

         for (int i=0; i<strlen(moustapha);i++)

         if(isalpha(moustapha[1]))
         {
             if (islower(moustapha[i]))
             {

            printf("%c", (((moustapha[i] - 'a') + k) % 26) + 'a');
             }
             if(isupper(moustapha[i]))

             {
                 printf("%c",(((moustapha[i]- 65)+k)%26)+ 65);
             }
         }
         else
         {
             printf("%c",moustapha[i]);
         }
         printf("\n");
     }
}