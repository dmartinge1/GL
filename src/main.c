#include "my_header.h"
#define SEUILB  -100
#define SEUILH  200
#define SEUIL  10


int main( )
{
	unsigned char bin[10] = {1,5,7,11,45,22,3,4,15,9};
		 short stat[10] = {-400,999,2,120,45,203,-99,0,15,199};
	unsigned short dist[10] = {400,999,2,120,45,203,99,0,15,199};
	unsigned char a[5] = { 1,5,9,8,11};
	unsigned char b[5];
	unsigned char miroir[6] = { 1,2,3};
	int  i , j , k, l, m;
	
	for(i=0; i<10; i=i+1)
		
	{  if(bin[i]<SEUIL)
	{ bin[i]= 0;}
	
	else bin[i] =1;
	}
	
	  for(j=0; j<10; j=j+1)
		  
	  { if (stat[j]<SEUILB)
		  
	  { stat[j] = SEUILB;}
	  
	  else if(stat[j]>SEUILH)
		  
	  {stat[j] = SEUILH;}
	  
	  else stat[j] = stat[j] ;
	  }
		   for(k=1; k<11; k=k+1)
		   { dist[k]= dist[k] - dist[k-1];}
		   
		   for (l=0;l<4; l=l+1)
		   { b[l] = a[4-l];}
	
		   
		   for(m=0;m<3;m=m+1)
	{
		miroir[m+3]=miroir[2-m];
	}
	
	
	
	return 0;
}
		
