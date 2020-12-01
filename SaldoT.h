#ifndef SALDOT_H_
#define SALDOT_H_

#include "GastoTransporte.h"
#include <iostream>
using namespace std;

class SaldoT:public GastoTransporte{
	private:
		float difT;
	public:
		SaldoT(float,float,float,float,float);
		void diferenciaT()
};

SaldoT::SaldoT(float d,float gT,float pT,float ST,float _difT): GastoTransporte(d,gT,pT,ST){
	difT=_difT;			
}

void SaldoT::diferenciaT(){
	difT=(p2.get_presupuestoT())-(p2.get_gastoT())+ST;
	if difT<0{
		cout<<"Tu saldo por gastar es de "<<difT<<endl;
	}
	else{
		cout<<"Ya te sobrepasate a tu presupuesto"<<difT<<endl;
	}
}
#endif

