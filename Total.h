#ifndef TOTAL_H_
#define TOTAL_H_

#include "GastoComida.h"
#include "GastoEntretenimiento.h"
#include "GastoTransporte.h"
#include <iostream>
using namespace std;

class Total{
	private:
		float gastosAdicionales;

	public:
		Total(float gA){
			gastosAdicionales=gA;
		}
		float get_gastosAdicionales();
		void GastoTotal();
		void PresupuestoTotal();
		void TotalFinal();	
};
float Total::get_gastosAdicionales(){
		return gastosAdicionales;
}
void Total::GastoTotal(){
		gastoTo=.get_gastosAdicionales+gastoC.get_gastoC+gastoT.get_gastoT+gastoE.get_gastoE;
		cout<<"Tu gasto total fue de "<<gastoTo<<endl;
}
void Total::PresupuestoTotal(){
		presupuestoTo=presupuestoC.get_presupuestoC+presupuestoT.get_presupuestoT+presupuestoE.get_presupuestoE;
		cout<<"Tu presupuesto total fue de "<<presupuestoTo<<endl;
}
void Total::TotalFinal(){
		T=presupuestoTo-gastoTo;
		cout<<"Tu diferencia total entre tu presupuesto y tu gasto fue de: "<<T<<endl;
}




#endif

