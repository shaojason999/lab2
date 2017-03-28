#include "calc.h"
Elo::Elo(int k){
	K=k;
}
void Elo::set(int ra, int rb, double sa){
	RA=ra;
	RB=rb;
	SA=sa;
}
int Elo::get(){
	EA=(double)1/(1+pow(10,(double)(RB-RA)/400));
	return (double)K*(SA-EA)+0.5;	//+0.5 used for rounding
}
