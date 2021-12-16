/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number? */


#include <iostream>
#include <cmath>
#include <vector>


int main()
{

int prime; // prime is the value of the sought prime, it cannot end in 0,2,4,6,8, ie even, .
int n; // n is the current working order ie 1st or 6th or 10001st, 
int count=3; // a record of the number we are checking to see if prime
std::vector <int> primes{2}; // listing known vecotrs

	std::cout<<"What is the n value of the prime you seek? \n";
	std::cin>>n;

	while(primes.size()<n){	
		for(int i=0;i<primes.size();i++){			
			if(count%(primes[i])==0)
				break;
			else if(i==(primes.size()-1)){
				primes.push_back(count);
				break;
			}						
		}
	count++;
	}

	std::cout<<"The "<<n<<"th prime is "<<primes[n-1];

return 0;
}