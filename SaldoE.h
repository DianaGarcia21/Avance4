#ifndef SALDOE_H_
#define SALDOE_H_

#include "GastoEntretenimiento.h"
#include <iostream>
using namespace std;

class SaldoE:public GastoEntretenimiento{
	private:
		float difE;
	public:
		SaldoE(string,float,float,float,float);
		void diferenciaE();
};

SaldoE::SaldoE (string t,float gE, float pE,float _SE,float _difE)
	difE=_difE;
	tipo=t;
	gastoE=gE;
	presupuestoE=pE;
	SE=_SE;
}

void SaldoE::diferenciaE(){
	gE=get_gastoE();
	pE=get_presupuestoE();
	difE=(pE)-(gE)+SE;
	if difE<0{
		cout<<"Tu saldo por gastar es de "<<difE<<endl;
	}
	else{
		cout<<"Ya te sobrepasate a tu presupuesto"<<difE<<endl;
	}
}
	
#endif

