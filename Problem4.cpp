/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers. */

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

//Prototypes:
int NumberGenerator();
std::string NumberConverter(int num);
int Length(std::string workingNumberString);
int Even(int length);
std::vector<int> NumberVector(int number);


int main()
{
	
	//Variables
	int palindrome=11; //The smallest palidrom is 11 so we should start there
	int largestNumber = NumberGenerator();
	std::vector<int> list = NumberVector(largestNumber);

	for(int i=1; i<list.size(); i++){
		int workNumInt = list[i];
		std::string workNumStr = NumberConverter(workNumInt);
		int numLen = Length(workNumStr);
		int odd_even = Even(numLen);
		 // std::cout<<"first occurance "<<workNumStr<<std::endl;

	
			for(int ii=0;ii<numLen/2;ii++){
				 // std::cout<<workNumStr[ii]<<" and "<<workNumStr[numLen-(1+ii)]<<std::endl;
				if(workNumStr[ii]!=workNumStr[numLen-(1+ii)])
					break;
				else if (ii==(numLen/2)-1){
					 // std::cout<<workNumStr<<" here "<<std::endl;
					if(workNumInt>palindrome){
						palindrome=workNumInt;
					}
				}
			}				
		}	
						
	

	std::cout<<"Largest Palindrome is "<<palindrome<<std::endl;


return 0;	
}



/////////////////////////////////
// Number Generator: will generate largest number possible based on the size inputed by the user, ie 2 digit or 3 or 4 digit.

int NumberGenerator(){
	int digits, largestNumber = 0;

	std::cout<<"Please enter the number of digits to use as each multiple will contain: "<<std::endl;
	std::cin>>digits;

	for(int i = digits-1; i>=0; i--){
		largestNumber = largestNumber + 9*(pow(10,i));
	}

return largestNumber;
}


/////////////////////////////////
// Number converter: will conver the numbers into their strings for comparison

std::string NumberConverter(int num){
	std::string number;
	number = std::to_string(num);
return number;
}

//////////////////////////////////
// even or odd?

int Even(int length){
	if(length % 2 == 0)
		return(1);
	else
		return(0);
}

////////////////////////
// length of number string

int Length(std::string workingNumberString){
	int length = workingNumberString.size();
return length;
}

///////////////////////
// generate a vector of number combinations products.

std::vector<int> NumberVector(int number){

	std::vector <int> numberList;
	int sizeVector;

	for(int i=1;i<=number;i++){
		for(int ii=1;ii<=number;ii++){
			// std::cout<<i*ii<<std::endl;
			numberList.push_back(i*ii);
		}
	}

	// sizeVector = numberList.size();
	// for(int a=0;a<sizeVector;a++){
	// std::cout<<numberList[a]<<std::endl;	
	// }

return numberList; 
}
