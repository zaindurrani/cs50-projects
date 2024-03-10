#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    //Check that there is one command line argumenr
    if (argc !=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //validate that thing key = argv[1];
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
   {
       if (!isalpha(key[i]))
       {
           printf("Usage: ./substitution key\n");
           return 1;
       }
   }

   //validate that the key consists of 26 characters
   if (strlen(key) != 26)
   {
       printf("key must consist of  26 characters.\n");
       return 1;
   }

   //validate that each alphabat is the key is unique
   for (int i = 0; i < strlen(key);i++)
   {
       for (int j = i + 1; j <strlen(key); j++)
       {
           if (toupper(key[i]) == toupper(key[j]))
           {
               printf("usage: ./substitution ley\n");
               return 1;
           }
       }
   }

   //prompt user for the plaintext
   string plaintext = get_string("plaintext: ");

   //convert all alphabets in the key to uppercase
   for (int i = 0; i <strlen(key); i++)
   {
      if(islower(key[i]))
      {
          key[i] = key[i] - 32;

      }
   }

      //print the ciphertext
      printf("ciphertext: ");

      for (int i = 0; i < strlen(plaintext); i++)
      {
          if (isupper(plaintext[i]))
          {
              int letter = plaintext[i] - 65;
              printf("%c", key[letter]);
         }
         else if (islower(plaintext[i]))
         {
             int letter = plaintext[i] - 97;
             printf("%c", key[letter] + 32);
         }
         else printf("%c", plaintext[i]);
     }
     printf("\n");
}

