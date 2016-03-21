#include <cstdlib>
#include <string>
#include "BMI.h"


BMI::BMI(){
	H=0;
	W=0;
	value=0;
}
void BMI::setvalue(float height,float weight){
	if(height > 0 && weight > 0 ){
		H = height / 100;
		W = weight;
		value = W / ( H * H );
	}
	else{
		exit(1);
	}
}
float BMI::getvalue(){
	return value;
}
string BMI::category(){
	if	(value < 15)			return "Very severely underweight\n";
	else if (value >= 15 && value < 16)	return "Severly underweight\n";
	else if (value >= 16 && value < 18.5)	return "Underweight\n";
	else if (value >= 18.5 && value < 25)	return "Normal\n";
	else if (value >= 25 && value < 30) 	return "Overweight\n";
	else if (value >= 30 && value < 35)	return "Obese Class (moderately obese)\n";
	else if (value >= 35 && value < 40)	return "Obese Class (severly obese)\n";
	else 					return "Obese Class (very severly obese)\n";
}
