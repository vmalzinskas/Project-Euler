#include <iostream>
#include <cmath>

void DivisorsList(int);

int main()
{

	DivisorsList();

return 0;
}


// Divisor function will list the divisors of a number

void DivisorsList(int n)
{	
	double root = sqrt(n);
	int count=0;

		if(n/root==root)
			count++;

	for(int i=1;i<root;i++)
	{
		if(n%i==0)
		{
			count+=2;
		}
	}


 std::cout<<"count "<<count<<std::endl;

return;	
}