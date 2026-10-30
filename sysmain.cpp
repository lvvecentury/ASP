#include <iostream>
#include <string>

class DISPLAY{
	private:
		unsigned int ENTRY;
		int press; 
		bool FLAG = false;
		unsigned int X;
		unsigned int Y;
		unsigned int Z;
	public:
		void INITIALIZATION();
		void FOLLOWUP();
		void MISC();
};	

	void DISPLAY::INITIALIZATION(){
		std::cout<<"LOCATION:INITIALIZATION..." <<std::endl;
		std::cout<<"Select an entry...";
		std::cout<<"[0] -- continuation ";
		std::cout<<"[1] -- misc configs ";
		std::cout<<"[2] -- automation ";	
		std::cout<<"[3] -- chess ";
		FOLLOWUP();
		std::cout<<"END OF INITIALIZATION... \n";
}
	void DISPLAY::FOLLOWUP(){
		do{
		std::cin>> ENTRY;
		switch(ENTRY){
			case 0:
				std::cout<<"do you really wanna continue? "<<std::endl;
				std::cout<<"[0] -- yes, move on"<<std::endl;
				std::cout<<"[1] -- no, return"<<std::endl;
				std::cin>> press;
			if(press != 0)
				{
					FLAG = false;
					std::cout<<"flag set to false, returning...\n";
				} else{	
				FLAG = true;
				std::cout<<"continuing... \n";
				}
				break;
			case 1:
				std::cout<<"accessing misc configs..."<<std::endl;
				MISC();
			case 2:
				std::cout<<"AUTOMATION ACTIVE" << std::endl;
				FLAG = true;
				break;
			case 3:
				std::cout<<"chess launching... " << std::endl;

				break;
			default:
				std::cout<<"invalid entry..." << std::endl;
				break;
		}

		} while (FLAG != true);
}
	void DISPLAY::MISC(){
		std::cout<<"assess whatever"<<std::endl;

	}

int main(){
	std::cout<<"starting sys...";
	std::cout<<"<<<<< >>>>";
	std::cout<<"STARTING INITIALIZATION...";
	DISPLAY LONE;
	LONE.INITIALIZATION();
	return 0;
}
