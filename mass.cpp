#include <iostream>
using namespace std;



class mass{
	private:
		float kgG(float m){
			return m / 0.001;
		};
		float kgLb(float m){
			return m * 2.20;	
		};
		float gKg(float m){
			return m / 1000 ; 
		};
		float gLb(float m){
			return m / 453.59;
		};
		float lbKg(float m){
			return m / 2.20;
		};
		float lbG(float m){
			return m * 453.59 ;
		};

	public:
		void conversor(){
		int unidade;
		float qte;
		cout<<"Qual unidade você quer converter?\n" 
		<<"1- Gramas\n" 
		<<"2- Kg\n"
		<<"3-lb "<<endl;
		cin>>unidade;
		cout<<"Quanto você deseja converter?"<<endl;
		cin>>qte;



		switch (unidade){

			case 1: //Gramas
			cout<<"A massa em kg é: "<< gKg(qte)<< endl;
			cout<<"A massa em lb é: "<< gLb(qte)<< endl;
			break;

			case 2: //Kg
			cout<<"A massa em g é: "<< kgG(qte)<< endl;
			cout<<"A massa em lb é: "<< kgLb(qte)<<endl;
			break;

			case 3: //lb
			cout<<"A massa em g é: "<< lbG(qte)<<endl;
			cout<<"A massa em kg é: "<< lbKg(qte)<<endl;
			break;
				}

};



};



int main(){
	mass g;
	g.conversor();
	return 0;
};
