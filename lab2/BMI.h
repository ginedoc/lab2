using namespace std;
#include <string>

class BMI{
public:
	BMI();
	void setvalue(float H,float W); 
	float getvalue();
	string category();
private:        
	float H;	//height
	float W;	//weight
	float value;	//BMI value
};

