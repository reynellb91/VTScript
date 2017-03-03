
#include "tokenize.h"

	Tokenize::Tokenize(){

	}
	std::list<string> parse(std::istream & file){
		
	}

	std::list<string> parse(string str){
	  	std::list<string> commandList = new std::list<string>();
	 // read file line by line
	    std::istringstream iss (str);

	    for (std::string line; std::getline(iss, line); ) {
	    	commandList.insert(command);
	    	cout << command;
	    }
	}
