# include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)

{
    string nom = get_string("nom:");

    char initials[4];
    int counter =0;


    for(int i=0; i<strlen(nom);i++)
    {
        if(isupper(nom[i]))
        {
            initials[counter]=nom[i];
            counter++;
        }
    }

    initials[3] = '\0';
  printf("%s\n",initials);

}