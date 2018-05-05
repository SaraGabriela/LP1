#include <iostream>
#include <cmath>
using namespace std;


float actualizaSaldo(float saldoAnterior, float interesMensual, float pagoMinimoM){
	float saldoActualizado=saldoAnterior * (1+interesMensual)-pagoMinimoM;
	return saldoActualizado;
}

int main(){

	float saldo, ianual,imensual,saldoNuevo, saldoOriginal;
	int meses,pmm,a;
	
	cout<<"Introduzca el saldo pendiente de su tarjeta de credito: ";
	cin>> saldo;
	cout <<"Introduzca el tipo de interes anual de la tarjeta de credito como un decimal: ";
	cin>> ianual;

	meses = 0;
	imensual=ianual/12;
	pmm=10;

	saldoOriginal=saldo;
	

		
while(1){
	
		while (meses<12){
		saldoNuevo=actualizaSaldo(saldo,imensual,pmm);

		meses = meses + 1;
			cout<<"Meses "<<meses<<endl;
			cout<<"saldoN "<<saldoNuevo<<endl;
			cout<<"pmm  "<<pmm<<endl;

		saldo = saldoNuevo;
		
		if(saldoNuevo <= 0){
			break;
		}

	}
		if(saldoNuevo>0){
		pmm=pmm+10;
		saldo=saldoOriginal;
		}
		else{
			break;
		}
	
}

	cout<<"FIN"<<endl<<endl;
	cout<<"pmm"<<pmm<<endl;
	cout<<"saldo "<<saldo<<endl;

	
	return 0;
}
