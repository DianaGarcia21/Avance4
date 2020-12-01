#ifndef SALDOC_H_
#define SALDOC_H_

#include "GastoComida.h"
#include <iostream>
using namespace std;

class SaldoC:public GastoComida{
	private:
		float difC;
	public:
		SaldoC(string,float,float,float);
		float diferenciaC();
};

SaldoC(string t,float gC, float pC,float SC,float _difC) : GastoComida(t,gC,pC,SC){
		difC = _difC;
}
float diferenciaC(p1){
	difC=(p1.get_presupuestoC())-(p1.get_gastoC())+SC;
	if difC<0{
		cout<<"Tu saldo por gastar es de "<<difC<endl;
	}
	else{
		cout<<"Ya te sobrepasate a tu presupuesto"<<difC<<endl;
	}
}
#endif

