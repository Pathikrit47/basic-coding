#include <stdio.h>
#include <ctype.h>

void main()
{
  char word[100];
  int count, ch, i;
  printf("Enter a word\n");
  for (i = 0;
    (word[i] = getchar()) != '\n'; i++) /* enters the user sentence to change the case*/ {
    ;
  }
  word[i] = '\0'; /* add the null character at the end of sentence */
  count = i; /*shows the number of chars accepted in a sentence*/
  printf("The given word is   : %s", word);
  printf("\nCase changed word is: ");
  for (i = 0; i < count; i++) {
      ch = islower(word[i]) ? toupper(word[i]) : tolower(word[i]); /* check each letter of sentence using islower function if it is lowercase use toupper function to change it to uppercase else use tolower function to change uppercase to lowercase */
      putchar(ch);
  }
} /*End of main()*/