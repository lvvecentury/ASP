#include<iostream>
#include<string>

int recursionz();

class ADJUSTMENTS{
	private:
		std::string PLAYLIST();
	public:
		bool switchCase(int void_Digit);
		std::string	url = PLAYLIST();
};
bool ADJUSTMENTS::switchCase(int& void_Digit){
	std::cout<<"you have opened ADJUSTMENTS, assess whatever you need..." << std::endl;
	std::cout<<"	||		" << std::endl; 
	std::cout<<"adjusting proper configs opens the //[CENTURYSYS]// and its full use." << std::endl;
	switch(void_Digit){
		case 1:
			std::cout<<"ONE:ADJUSTING" << std::endl;		
			break;
		case 2:
			std::cout<<"TWO:ADJUSTING..." << std::endl;
			break;
	}
	return 1;
}


std::string ADJUSTMENTS::PLAYLIST(){
	 
	return "HELLO";
}




class CENTURY{
	private:
	unsigned int HOURS_UNSLEPT;
	unsigned int DAYS_GONE;

	std::string SECTION;



	public:
	unsigned int ENTRY;
	bool T_or_F = false;

void XYZ()

	void INITIATION(){
		std::cout<<" IN USE OF CENTURY STRUCT,  PLEASE SELECT AN ENTRY ...  "<< std::endl;
		do{
			std::cout<<" [1]...CONFIGS, [10]...TERMINAL, [100]...playlistty " << std::endl;
			std::cin>> ENTRY;
			switch(ENTRY){
				case 1:{
					std::cout<<"CONFIGS..." << std::endl;
					ADJUSTMENTS adj1;
					T_or_F = adj1.switchCase(ENTRY);
					break;}
				case 100:{
					std::cout<<"Playlist..." << std::endl;
					ADJUSTMENTS adj3;
					std::cout << adj3.url << std::endl;
					break;}
				default:{
					std::cout<< "Invalid... try again" << std::endl;
					break;}
			}
		} while (T_or_F != true);
	std::cout<<"if properly configured... try running XYZ()..." << std::endl;
	}
std::cout<<"OUTSIDE OF INITIATION FUNCTION" << std::endl;

};

void CENTURY::XYZ(){

}


int main(){
	std::cout<<"RUNNING INITIATION() " << std::endl;
	CENTURY YEARS;
	YEARS.INITIATION();
	return 0;
}
