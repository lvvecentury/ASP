#include <iostream>
#include <string>

class DISPLAY{
	private:
		unsigned int ENTRY;
		int press; 
		bool FLAG = false;
		bool yankedVal = false;
		unsigned int X;
		unsigned int Y;
		unsigned int Z;
		std::string expression = "default";
	public:
		void INITIALIZATION();
		void FOLLOWUP();
		bool MISC();
};	

	void DISPLAY::INITIALIZATION(){
		std::cout<<"LOCATION:INITIALIZATION..." <<std::endl;
		FOLLOWUP();
		std::cout<<"END OF INITIALIZATION... \n";
}
	void DISPLAY::FOLLOWUP(){
		do{
		std::cout<<"Select an entry...";
		std::cout<<"[0] -- continuation ";
		std::cout<<"[1] -- misc configs ";
		std::cout<<"[2] -- automation ";	
		std::cout<<"[3] -- chess ";
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
				Y = MISC(); // have this return a value based on user selection
				if(Y){		// between t and f, if yankedVal is
							// t:save changes and locked config, give user a tic via shared ptr
				}			// f:return f as the user was just inspecting, no changes
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
	bool DISPLAY::MISC(){
		std::cout<<"<MISC... \n";
		std::cout<<"WOULD ANY CHANGES LIKE TO BE MADE?... \n";
		std::cout<<"[1] -- Save my changes (you will be locked out of configs) \n";
		std::cout<<"------ until a recursion is called upon ur ticket \n";
		std::cout<<"[0] -- Dont save my changes (you are in read mode only) \n";
		std::cin>> yankedVal;

		if(yankedVal){
			std::cout<<"Changes will be made and saved... \n";	
			int* ticket = new int;
			*ticket = 9;
			std::cout<< expression << std::endl;
			std::cin>> expression;
			std::cout <<"Your changes to expression is... " << expression << std::endl;	
		} else if(!yankedVal){
			std::cout<<"Read only... \n";
			std::cout<< expression << std::endl;
		} else{
			std::cout<<"INVALID INPUT... \n";
			std::cout<<"returning... \n";
			yankedVal = false;
		}		
	return Y;
}

int main(){
	std::cout<<"starting sys...";
	std::cout<<"<<<<< >>>>";
	std::cout<<"STARTING INITIALIZATION...";
	DISPLAY LONE;
	LONE.INITIALIZATION();
	return 0;
}
