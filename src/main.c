#include "ansi_c.h"

int main(void)
{
char prenom  [100];
char age  [100];
char nom  [100];

printf ("Prenom:");
scanf("%s",prenom);
printf ("Nom:");
scanf("%s",nom);
printf ("Age :");
scanf("%s",age);

printf ("Prenom: %s   Nom:%s   Age:%s ans",prenom ,nom ,age );
getchar();

return 0;

}
