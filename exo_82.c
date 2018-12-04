#include <ansi_c.h>
int main()
{
	char ligne1[80] = "Nom: pentagone_B";
	char ligne2[80] = "nb points: 5";
	char ligne3[80] = "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	
	char nom_fig[80];
	char nb_pts[80];
	char x[80];
	char y[80];
	
	int i,j;
	
	
	for(i=0;i<5;i++)
	{ x[i] = ligne3[2i];}
	
	for(j=1;j<5;j++)
	{ y[j] = ligne3[2j-1];}
	
	nom_fig = ligne1;
	nb_pts = ligne2;
	
	printf("%s",nom_fig);
	printf("%s",nb_pts);
	printf("%s",x);
	printf("%s",y);
	
	
	
	
	
	return 0;
}
	
	
	
	
