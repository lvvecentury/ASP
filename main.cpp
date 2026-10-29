#include<iostream>
#include<string>

//int recursionz();
//bool R_VERIFIC();
bool VERIFICATION = false;


class ADJUSTMENTS{
	private:
		std::string PYL();
		unsigned int BL_VAL = 1;
	public:
		void switchCase(unsigned int& void_VL);
		std::string	url = PYL();
};

void ADJUSTMENTS::switchCase(unsigned int& void_VL){
	std::cout<<"you have opened ADJUSTMENTS, assess whatever you need..." << std::endl;
	std::cout<<"	||  	" << std::endl; 
	std::cout<<"adjusting proper configs opens the //[CENTURYSYS]// and its full use." << std::endl;
	std::cout<<"    ||      " << std::endl;
	
	do{
	std::cout<<"Current save value is : "<< void_VL<<" change save value for; any changes? (<9> true | <1> false) " << std::endl;
    std::cin>>void_VL;

	switch(void_VL){
		case 1:{
			std::cout<<"ONE:ADJUSTING TO FALSE" << std::endl;
			BL_VAL = void_VL;
			break;}
		case 9:{
			std::cout<<"TWO:ADJUSTING... TO TRUE" << std::endl;
			BL_VAL = void_VL;
			break;}
		default:
		    std::cout<< "INVALID... "<<  std::endl;
	}
	std::cout<<"Current save value is : "<< void_VL<< std::endl;

	} while (BL_VAL != void_VL);

}

std::string ADJUSTMENTS::PYL(){
	 
	return "HELLO";
}



class CENTURY{
	private:
	unsigned int NS;
	unsigned int DYSG;

	//std::string SECTION;

	public:
	unsigned int ENTRY;
	unsigned int CONF_FLAG = 0;
	bool T_or_F = false;
	CENTURY(unsigned int hours, unsigned int DG){
	    NS = hours;
	    DYSG = DG;
	}

    void XYZ();
    void INTROSPECTION();


	void INITIATION(){
	    ENTRY = 0;
		std::cout<<"--IN USE OF CENTURY STRUCT, PLEASE SELECT AN ENTRY ... "<< std::endl;
		std::cout<< ENTRY << std::endl;
		do{
			std::cout<<"--[1]...CONFIGS, [10]...TERMINAL, [100]...pyl " << std::endl;
			std::cin>> ENTRY;
			switch(ENTRY){
				case 1:{
					std::cout<<"--CONFIGS..." << std::endl;
					ADJUSTMENTS adj1;
					adj1.switchCase(CONF_FLAG);
					std::cout <<" value has been set for ADJ... " <<std::endl;
					T_or_F = true;
					break;}
				case 100:{
					std::cout<<"--Playlist..." << std::endl;
					ADJUSTMENTS adj3;
					std::cout << adj3.url << std::endl;
					break;}
				default:{
					std::cout<< "Invalid... try again" << std::endl;
					break;}
			}
		} while (T_or_F != true);
	std::cout<<"--if properly configured... try running XYZ()..." << std::endl;
	std::cout<<"--END OF INITIALIZING... " << std::endl;
	}
	
};

void CENTURY::XYZ(){}
void CENTURY::INTROSPECTION(){
	    std::cout<< "centurySys active "<< std::endl;
	    do{
	        INITIATION(); 
	        
	    } while(VERIFICATION != true);
}



int main(){
	std::cout<<"--RUNNING INITIATION " << std::endl;
	CENTURY YEARS(1, 6599);
	YEARS.INITIATION();
	//VERIFICATION = R_VERIFIC();
	//std::cout<<"Current status is [ " << VERIFICATION << " ]... " std::endl;
	
	YEARS.INTROSPECTION();
	return 0;
}