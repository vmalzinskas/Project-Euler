/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

#include <iostream>
#include <cmath>
#include <vector>

std::vector<std::vector<int>> RootReturn(int aLower, int aUpper, int bLower, int bUpper);

int main(){

	std::vector<std::vector<int>> rootsOfRange;
	int sum;

	int targetNumber = 1000;
	int a,b,c; //  which means 1<a<332 2<b<499 334<c<997
	rootsOfRange=RootReturn(1,332,2,449);
	std::cout<<rootsOfRange.size()<<std::endl;
	for(int i=0;i<rootsOfRange.size();i++){
		// std::cout<<rootsOfRange[i][0]<<' '<<rootsOfRange[i][1]<<' '<<rootsOfRange[i][2]<<std::endl;
		if(rootsOfRange[i][0]+rootsOfRange[i][1]+rootsOfRange[i][2]==1000){
			std::cout<<"We have a winner "<<rootsOfRange[i][0]<<' '<<rootsOfRange[i][1]<<' '<<rootsOfRange[i][2]<<std::endl;
			std::cout<<"Product ="<<rootsOfRange[i][0]*rootsOfRange[i][1]*rootsOfRange[i][2];
		}
	}
	

return 0;
}

////////////////////

// lets sort through  a^2 + b^2 as this will need to give a number that has a integer square root

std::vector<std::vector<int>> RootReturn(int aLower, int aUpper, int bLower, int bUpper){

	std::vector<std::vector<int>> bVec;
	std::vector<int> roots(3);
	

	for(int a=aLower;a<=aUpper;a++){
		for(int b=bLower;b<=bUpper;b++){
			double root = sqrt(pow(a,2)+pow(b,2));
			// std::cout<<"root "<<root<<std::endl;
			if(std::fmod(root,1)==0){
				roots[0]=a;
				roots[1]=b;
				roots[2]=root;
				// std::cout<<a<<' '<<b<<' '<<root<<std::endl;
				bVec.push_back(roots);
			}
		}
	}
return bVec;
}