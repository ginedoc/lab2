Lab2: Lab2_main.o BMI.o
	g++ -o Lab2 Lab2_main.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

Lab2_main.o: Lab2_main.cpp BMI.h
	g++ -c Lab2_main.cpp

clean:
	rm -rf BMI.o Lab2_main.o
