#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>
using namespace std;


int main()
{
	int dem = 0;
	for (int i=0; i< 1000000; i++){
		
		float x = 2*( (rand() *1.0) / RAND_MAX) - 1;
		float y = 2*( (rand() *1.0) / RAND_MAX) - 1;
	
		if ( sqrt(x*x + y*y) <= 1.0)
			dem++;
	}
	
	
	cout <<"so pi la : " << 4.0* dem / 1000000.0 ;
	
	return 0;
}
