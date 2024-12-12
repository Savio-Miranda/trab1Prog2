#include <iostream>
using namespace std;



class moeda{
	public:

		//real, dólar, euro e libra
		float moeda, valor;
		float real, dolar, euro, libra;


		float realDolar(){}
		float realLibra(){}
		float realEuro(){}
		float dolarReal(){}
		float dolarLibra(){}
		float dolarEuro(){}
		float euroReal(){}
		float euroLibra(){}
		float euroDolar(){}
		float libraReal(){}
		float libraEuro(){}
		float libraDolar(){}
		




		std::cout<<"Quanto você tem?"<<endl;
		std::cin>>valor;
		
		std::cout<<"Qual moeda você tem? "<<endl;
		std::cout<<"1-Real"<<endl;
		std::cout<<"2-Dólar"<<endl;
		std::cout<<"Euro"<<endl;
		std::cout"Libra"<<endl;
		std::cin>>moeda;
		/*
		switch(moeda){
		case 1: //real
			int convertida;
			std::cout<<"Você deseja converter para qual moeda?"<<endl; 	
			std::cout<<"1-Dólar\n"
				 <<"2-Libra\n"
				 <<"3-Euro";
			std::cin>>convertida;
			if (convertida==1){}
			else if(convertida==2){}
			else{}
			
		
		}*/

		private: //conversões
		
		float realDolar(){
		return valor/6;
		};
		
		
		float realEuro(){
		return valor/6.33;
		};
		
		float realLibra(){
		return valor/7.66;
		};

		float dolarReal(){
		return valor/6.03;
		};
		
		float dolarLibra(){
		return valor/0.79;
		};
		
		float dolarEuro(){
		return valor/1.05;
		};

		float euroReal(){
		return valor/0.16;
		};

		float euroDolar(){
		return valor/};










};








class conversor{
	public:
		




};
