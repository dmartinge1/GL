#include <ansi_c.h>
int main()
{
	char phrase[100];
	char nom[100];
	char prenom[100];
	char age[100];
	
	scanf(phrase);
	
	
	sscanf(phrase,"Je m'appelle %s %u %*s et j'ai %lu %*s ans",prenom, &nom , &age);
	
	
	return 0 ;
	
}
