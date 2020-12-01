#include <iostream>
using namespace std;
#include "GastoComida.h"
#include "GastoEntretenimiento.h"
#include "GastoTransporte.h"
#include "Total.h"

int main(){
	GastoEntretenimiento p3("Cine",40,35,0);
		
	p3.gasto3();
	p3.saldoEntetenimiento();
	return 0;
}