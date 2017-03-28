#include <iostream>
#include <cmath>
#include <fstream>
#include "calc.h"
using namespace std;

int main(){
	int k,ra,rb,change;
	double sa;
	ifstream inFile("file.in");
	ofstream outFile("file.out");
	inFile>>k>>ra>>rb;
	outFile<<ra<<" "<<rb<<endl;
	Elo calc(k);
	while(inFile>>sa){
		calc.set(ra,rb,sa);
		change=calc.get();
		ra+=change;
		rb-=change;
		outFile<<ra<<" "<<rb<<endl;
	}

}
