#include "TP_lib_suite.h"


short tirerNumero(void);


int main(void)
{
	int suite_j[6] ={4,10,24,30,44,5};
	
	int suite_g[6] ;
	int score[100];
	
	unsigned char i, j,nb_gagnant=0,D ;
	
		for(D=0;D<100;D++)
			
	
		{	for(i=0;i<6;i++)
	{ 
		for (j=0;j<6;j++)
			
			
	{   suite_g[j] = tirerNumero();
		if(suite_j[i] ==suite_g[j])
		nb_gagnant= nb_gagnant+1;
	}
	}
	score[D] = nb_gagnant;	}
	return 0; 
}

