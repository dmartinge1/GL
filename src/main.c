
#include <stdio.h>
#include <stdlib.h>

#define toto =0

int main (void) 
{

int s1 = 3 , s2 =3 , s3 = 3 , s4 ,n = 2 , m = 2 , p =1, q=1, s41 = 3, s42 =7;
  
  
while( n< 30 )
{

s1= s1 + 3*n;

n= n+1;

}



while ( 3*m< 9876)
{
	
	s2 = s2 + 3*m;

	m=m+1;

	
}

while ( p<16)
{
	s41 = s41+3*(p+1);
	p=p+1;
}

while ( q<6)
{
	s42 = s42 +7*(q+1);
	q=q+1;
}
 
s4 = s41+s42-63;



return 0;
}

