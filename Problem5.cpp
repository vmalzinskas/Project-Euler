/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <iostream>

int main(){

		
	int range = 20;
	int count = 1;
	int number;
	int cont = 1;

	while(cont==1){
		for(int i=1;i<=range;i++){
				// std::cout<<"number "<<count<<" i "<<i<<" remainder "<<count%i<<std::endl;
				if(count%i != 0)
					break;
				if(i == range){
					cont = 0;
					number = count;
				}
		}
		count++;
		// std::cout<<count<<std::endl;
	}

	std::cout<<"The number is "<<number<<"."<<std::endl;

return 0;
}

/////////////
