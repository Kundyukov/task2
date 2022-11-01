#include <iostream>
#include "cls.h"
#include <math.h>
#include <fstream>

int main()
{
	Intro obj1;
	Outro obj2;
	Intro* p;
	p = &obj1;
	p->morph();

	Tabul* f = new Tabul;
	f->tabulation();
	f->output();

	p = &obj2;
	p->morph();
	delete(f);
	return 0;
}

