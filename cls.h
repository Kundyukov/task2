#pragma once
#include <fstream>
#include <iomanip>

class Intro //polymorph
{
public:
	virtual void morph()
	{
		std::cout << "function tabulation program\n\n";
	}
};

class Values
{
protected:
	double leftval, rightval, step, x, y;
public:
	

	double setleft()
	{
		std::cout << "Enter left limit\n";
		std::cin >> leftval;
		return leftval;
	}
	double setright()
	{
		std::cout << "Enter right limit\n";
		std::cin >> rightval;
		return rightval;
	}
	double setstep()
	{
		std::cout << "Enter step\n";
		std::cin >> step;
		return step;
	}
};

class Tabul : protected Values //inheritance
{
private:
	double y; //incapsulation 
public:
	 virtual void tabulation()
	{
		setleft();
		setright();
		setstep();
		
		for (x = leftval; x <= rightval; x+=step)
		{
			y = sqrt((pow(x, 2)) - 4 * log(x));
			std::cout<<"x: "  << x << "\t y:" << y;

			if (isnan(y))
			{
				std::cout << "\tnot exist";
			}

			if (y>=INFINITY)
			{
				std::cout << "\t\tinfinite discontinuity!";
			}
			std::cout << std::endl;
			
		}
	}
	 void output() //file output
	 {
		 std::ofstream fout("C:\\Users\\Ivan\\Desktop\\hello.txt");
		 for (x = leftval; x <= rightval; x += step) 
		 {
			 y = sqrt((pow(x, 2)) - 4 * log(x));
			 fout << "x: " << x << "\t y: " << y;
			 if (isnan(y))
			 {
				 fout << "\tnot exist";
			 }
			 if (y >= INFINITY)
			 {
				 fout << "\t\tinfinite discontinuity!";
			 }
			 fout << std::endl;
		 }
		 fout.close();
	 }
	 
};

class Outro :public Intro //polymorph
{
public:
	virtual void morph() override
	{
		std::cout << "\nprogram was be finished\n";
	}
};