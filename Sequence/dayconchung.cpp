#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>
#include <string.h>
using namespace std;


int main()
{
	const char* s1 = "kien vo ta";
	const char* s2 = "kien vo";
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	

	int a[len1+1][len2+1] = {{0},{0}};
	int t[len1+1][len2+1];
	
	for (int i=0; i<=len1; i++)
		a[i][0] = 0;
	for (int i=0; i<=len2; i++)
		a[0][i] = 0;
	
	for (int i = 1; i<= len1; i++)
		for(int j = 1; j<= len2; j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				a[i][j] = a[i-1][j-1] +1;
				t[i][j] = 0;
			}
			else{
				if(a[i-1][j] > a[i][j-1]){
					a[i][j] = a[i-1][j];
					t[i][j] = 1;
				}
				else{
					a[i][j] = a[i][j-1];
					t[i][j] = -1;
				}
			}		
		}
	int len = a[len1][len2];
	cout << "chieu dai con chung dai nhat la : " << len;
	
	char* s = new char[len+1];
	s[len]=0;
	while ( len > 0 )
	{
		if(t[len1][len2] == 0)
		{
			s[--len] = s1[len1-1];
			len1--;	
			len2--;
		}
		if(t[len1][len2] == 1)
			len1--;	
		if(t[len1][len2] == -1)
			len2--;
	}
	
	cout << "chuoi "<< s;
	return 1;
}
