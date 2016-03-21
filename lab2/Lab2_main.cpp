#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "BMI.h"

using namespace std;

int main(){
	
	//declare of input/output file
	
	ifstream Input("file.in",ios::in);
	ofstream Output("file.out",ios::out);

	if(!Input){
		cerr << "File doesn't exist" << endl;
		exit(1);
	}

	//declare the variable
	
	int height = 0;
	int weight = 0;
	BMI john;

	//read the file and output

	while((Input >> height >> weight) != 0 ){
		Output.unsetf(ios::fixed);
		
		john.setvalue(height,weight);
		
//		Output << height << "\t" << weight << "\t";
		Output << fixed << setprecision(2) << john.getvalue() << "\t";
		Output << john.category();
	}

	Input.close();
	Output.close();
	return 0;
}
