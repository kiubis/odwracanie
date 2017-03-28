#include <iostream>

#define version std::cout<<"Compilation date: "<<__DATE__<<" "<<__TIME__<<std::endl;

int main(){
	version;
	
	std::string strText;
	std::cout <<"Podaj tekst do odwrocenia:\n";
	std::getline(std::cin,strText);
	
	int iStop=strText.length()-1;
	
	std::cout << "Odwrocony tekst: \n";
	
	for(int i=strText.length(); i>=0; i--){
		if(strText[i]==32 || strText[i]==0){
			for(int j=i; j<iStop; j++)
				std::cout << strText[j+1];
			iStop=i;
		}
	}
	
	for(int i=0; i<iStop; i++)
		std::cout << strText[i];
		
	std::cout<<std::endl;
	
	system("PAUSE");
	return 0;	
}

