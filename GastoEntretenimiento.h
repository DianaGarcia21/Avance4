#ifndef GASTOENTRETENIMIENTO_H_
#define GASTOENTRETENIMIENTO_H_

#include "SaldoE.h"
#include <iostream>
using namespace std;

class GastoEntretenimiento {
	private:
		string tipo;
		float gastoE;
		float presupuestoE;
		float SE;
	
	public:
		GastoEntretenimiento(string,float,float,float);
		float get_gastoE();
		float get_presupuestoE();
		void set_gastoE(float);
		void gasto3();
		float get_SE();
		void saldoEntretenimiento();
};

GastoEntretenimiento::GastoEntretenimiento(string t,float gE, float pE,float _SE){
			tipo=t;
			gastoE=gE;
			presupuestoE=pE;
			SE=_SE;
		}
float GastoEntretenimiento::get_gastoE(){
	return gastoE;
}
float GastoEntretenimiento::get_presupuestoE(){
	return presupuestoE;
}
void GastoEntretenimiento::set_gastoE(float gE){
	gastoE=gE;
}
float GastoEntretenimiento::get_SE(){
	return SE;
}
float GastoEntretenimiento::gasto3(){
	gasto3=presupuestoE-gastoE;
	cout<<"El costo en "<<tipo<<" fue de "<<gasto3<<endl;
}
void GastoEntretenimiento::saldoEntretenimiento(){
	diferenciaE();
}	
#endif

