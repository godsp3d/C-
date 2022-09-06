
#include <iostream>
#include <string>
#include <vector>
#include "external.h"
#include <cctype>
using namespace std;



string reversal::name_reversal(string name) {
	//check initial value for lower bound
	if (name == "") {

		return "";
	}
	//creates stack flow to then contiing invocating reversed name
	return name_reversal(name.erase(0, 1))  + (reversed_name + name[0]);
	
}
