#include "iostream"
#include "string"

void docShow(void);
void reconFull(std::string, std::string);

int main(int argc,char** argv){
	if(argc == 1){
		docShow();
	}else{
		std::cout << "hello" << std::endl;
	}
	return 0;
}



void docShow(){
	std::cout << "  _ __    ___    ___    ___    _ __  " << std::endl;
	std::cout << " | '__|  / _ \\  / __|  / _ \\  | '_ \\ " << std::endl;
	std::cout << " | |    |  __/ | (__  | (_) | | | | |" << std::endl;
	std::cout << " |_|     \\___|  \\___|  \\___/  |_| |_|" << std::endl;               
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Help Activated..." << std::endl;
	std::cout << std::endl;
	std::cout << " -f <target_website> : to full reconasis to the website" << std::endl;
        std::cout << " -s <target_website> : single scan that page " << std::endl;
        std::cout << " -fr <target_website> : Full scan and generate report" << std::endl;
        std::cout << " -sr <target_website> : single scan that page and generate report " << std::endl;
}
void reconFull(std::string option, std::string target){
	std::cout << target << std::endl;
}
