/*The sum of the squares of the first ten natural numbers is, 1^2+2^2+3^2 ....
The square of the sum of the first ten natural numbers is, (1+2+3)^2
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

#include <iostream>
#include <cmath> 

int SummingSet(int lastNumberInSet);
double SummingConsecSquares(int lastNumberInSet);

int numSet;
int sumTotal;
int sumSquares;
int differenceOfSums;

int main()
{	
	std::cout<<"What is the last number in the set you would like to sum? \n";
	std::cin>>numSet;
	sumTotal = SummingSet(numSet);
	sumSquares = SummingConsecSquares(numSet);
	differenceOfSums = pow(sumTotal,2) - sumSquares;
	std::cout<<"The difference of sums is "<<differenceOfSums<<" .";



return 0;
}

////////////////////
int SummingSet(int lastNumberInSet){
	int sum = (lastNumberInSet/2)*(lastNumberInSet+1);
return sum;
}

double SummingConsecSquares(int lastNumberInSet){
	double sum = lastNumberInSet*((lastNumberInSet+1)*(2*lastNumberInSet+1))*(1.0/6);
return sum;
}
