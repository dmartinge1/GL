#include "TP_lib_suite.h"

void  initialiserTirage(void);
short tirerNumero(void);


int main(void)
{
	int suite_j[6] ={4,10,24,30,44,5};
	
	int suite_g[6] = {tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};
	
	unsigned char i, j,nb_gagnant=0,D, nb_super_gagnant;
	
		for(D=0;D<100;D++)
	
		{	for(i=0;i<6;i++)
	{ 
		for (j=0;j<6;j++)
			
	{ if(suite_j[i] ==suite_g[j])
		nb_gagnant= nb_gagnant+1;
	}
	}
		}
	return 0; 
}
	
