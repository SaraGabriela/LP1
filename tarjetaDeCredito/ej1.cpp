#include <iostream>
#include <cmath>
using namespace std;

float pagoMensualMinimo(float ptasa, float psaldo){
	float resultado = ptasa * psaldo;
	return resultado;
}

float interesPagado(float itasa,  float isaldo){
	float resultado = (itasa/12)*isaldo;
	return resultado;
}

float pagoPrincipal(float pmm1, float ip1){
	float resultado = pmm1 - ip1;
	return resultado;
}

float round(float num){
	float r = roundf(num * 100) / 100; 
	return r;
}
int main(){
	float saldo, ianual, tasa, pmm, ipagado, pprincipal, srestante,mtotal=0;
	cout<<"Introduzca el saldo pendiente de su tarjeta de credito: ";
	cin>> saldo;
	cout <<"Introduzca el tipo de interes anual de la tarjeta de credito como un decimal: ";
	cin>> ianual;
	cout <<"Ingrese la tasa de pago mensual minimo como un decimal: ";
	cin>> tasa;
	
	for(int i=1; i<=12; i++){
		cout<<"Mes: "<<i<<endl;
		pmm = pagoMensualMinimo(tasa, saldo);
		cout<<"Pago mensual minimo: "<< round(pmm) << endl;
		
		ipagado = interesPagado(ianual,saldo);
		pprincipal = pagoPrincipal(pmm, ipagado);
		cout<<"Pago principal: "<<round(pprincipal)<<endl;
		
		srestante = saldo - pprincipal;
		cout << "Saldo restante: "<<round(srestante)<<endl<<endl;
		saldo = srestante;
		
		mtotal = mtotal + pmm;
	}

	
	cout<<"RESULTADO"<<endl;
	cout<<"Monto total pagado: "<<round(mtotal)<<endl;
	cout << "Saldo restante: "<<round(srestante)<<endl<<endl;
	
	return 0;
}
