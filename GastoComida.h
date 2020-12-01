#ifndef GASTOCOMIDA_H_
#define GASTOCOMIDA_H_

#include "Total.h"
#include "SaldoC.h"
#include <iostream>
using namespace std;

class GastoComida{
	private:
		string tipo;
		float gastoC;
		float presupuestoC;
		float SC;	
		
	
	public:
		GastoComida(string t,float gC, float pC, float SC){
			tipo=t;
			gastoC=gC;
			presupuestoC=pC;
			SC=0
		}
		float get_gastoC();
		float get_presupuestoC();
		float get_SC();
		void set_gastoC(float);
		float gasto1();
		void saldoC1();
	
};
float GastoComida::get_gastoC(){
	return gastoC;
}
float GastoComida::get_presupuestoC(){
	return presupuestoC;
}
float GastoComida:: get_SC(){
	return SC;
}
void GastoComida::set_gastoC(float gC){
	gastoC=gC;
}
float GastoComida::gasto1(){
	gasto1=presupuestoC-gastoC;
	cout<<"Tu "<<tipo<<" de comida tuvo un costo de "<<gasto1<<endl;
	return gasto1;
}

void GastoComida::saldoC1(){
	saldoC;	
}






#endif

