#include <cstdlib>
#include <iostream>
#include "Kvad.h"
#include "TListItem.h"
#include "List.h"

int main(int argc, char** argv) {
	
	
	TList list;
	char cmd[255], arg;
	do
	{
		
		std::cout<<" ' + ' - add item "<<std::endl;
		std::cout<<" ' - ' - delete item "<<std::endl;
	
		std::cout<<" ' q ' - exit "<<std::endl;
		std::cout<<"Enter command"<<std::endl;
		std::cin>>cmd;
	
		if(cmd[0]=='+')
		{
			Kvad a; 
			std::cout<<"Enter side"<<std::endl;
			
			std::cin>>a;
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			list.add(Kvad(a), b);
			std::cout << list;
		
		}
		if(cmd[0]=='-')
		{
			
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			 if(list.empty()==true){
				 std::cout<<"List is empty"<<std::endl;
			
			 }
			 else
			 {
				list.dell(b);
			std::cout << list;
			 }
		
		}
		
	}
	while(cmd[0]!='q');
	
	

 system("pause");
 return 0;
}
