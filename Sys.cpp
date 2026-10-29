#include<iostream>
#include<string>
int century(unsigned int& VAL_FROM_USER);
int constNYank(int stackNum);
void deleteFunc(int forDeletion);
int sFunc(int numPackage);
int sFuncSec(int numPackageSec);
int inputVal;

unsigned int sysOneForth;
unsigned int sysHalf;
unsigned int sysThreeForth;
unsigned int sysOneWhole;
signed int sysNEG;

unsigned int return_Val;

bool CHECK = false;

int main(){
do{
	std::cout<< "System century is awaiting input between (-100 / 100) -->:";
	std::cin>> inputVal;

	if(inputVal < 0){
		sysNEG = inputVal;
		std::cout<<"negative int detected, rerouting." << std::endl;
	} else if(inputVal > 0 && inputVal <= 25 ){
		sysOneForth = inputVal; 
		return_Val = century(sysOneForth);
		CHECK = true;
	} else if (inputVal > 25 && inputVal <= 50){
		sysHalf = inputVal;
		CHECK = true;	
	} else if(inputVal > 50 && inputVal <= 75){
		sysThreeForth = inputVal;	
		CHECK = true;
	} else if(inputVal > 75 && inputVal <= 100){
		sysOneWhole = inputVal;
		return_Val = century(sysOneWhole);
		CHECK = true;	
	} else {
		std::cout<<"Invalid entry piece of shit!11!!" << std::endl;
	}

} while(CHECK != true); 

std::cout<<"W im proud, packaging response towards destin rq..... ";
std::cout<< return_Val;


return 0;
}



int century(unsigned int& VAL_FROM_USER){
	return VAL_FROM_USER * 3;	
}

/* int sFunc(int numnPackage){
	switch(numnPackage){
		case 1:
	}
}

int sFuncSec(int numPackageSec){

} */
