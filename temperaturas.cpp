#include <iostream>
using namespace std;


class temperatura{
	private:
		
		float celsiusFar(){
			float temp;
			cout<<"Quantos graus você quer converter? "<<endl;
			cin>>temp;
			temp = (temp * 1.80);
			return temp + 32;
			};
		
		float celsiusKelvin(){
			float temp;
			cout<<"Quantos graus você quer converter? "<<endl;
			cin>>temp;
			return temp + 273.15;
			};

		float farCelsius(){
			float temp;
                        cout<<"Quantos graus você quer converter? "<<endl;
			cin>>temp;
			temp = temp - 32 ;
			temp = temp * 5 ;
			return temp / 9;	
		};
		float farKelvin(){
                        float temp;
                        cout<<"Quantos graus você quer converter? "<<endl;
                        cin>>temp;
			temp -= 32;
			temp = temp * (5.0/9.0);
			return temp + 273.15;			
			};
		float kelvinCelsius(){
                        float temp;
                        cout<<"Quantos graus você quer converter? "<<endl;
                        cin>>temp;
			return temp - 273.15;		
			};
		float kelvinFar(){
                        float temp;
                        cout<<"Quantos graus você quer converter? "<<endl;
                        cin>>temp;
			temp = temp - 273.15;
			temp = temp * 1.80;
			return temp + 32;			
			};










	public:
		int caso;
		
		void conversor(){
				int convertida;

			std::cout<<"Qual temperatura você quer converter? "<<endl;
			std::cout<<"1- Celsius\n"<<
				   "2- Fahrenheit\n"<<
				   "3- Kelvin"<<endl;
			cin>>caso;
			
			switch (caso){
				case 1: //Celsius
					std::cout<<"Para qual você quer converter? "<<endl;
					std::cout<<"1- Fahrenheit\n"<<
					           "2- Kelvin"<<endl;
					cin>>convertida;
					if (convertida == 1){ 
						float a = celsiusFar();
						cout<<"A temperatura em fahrenheit: "<< a <<endl;
					}
					else{
						float a = celsiusKelvin();
						cout<<"A temperatura em Kelvin: "<< a <<endl;
					};
				case 2: //Fahrenheit
					//int convertida;
					std::cout<<"Para qual unidade você deseja converter? "<<endl;
					std::cout<<"1- Celsius\n"
						 <<"2- Kelvin"<<endl;
					cin>>convertida;
					if (convertida == 1){
						float a = farCelsius();
						cout<<"A temperatura em celsius é: "<<a<<endl;
					}
					else{
						float a = farKelvin();
						cout<<"A temperatura em Kelvin é: "<<a<<endl;
					};
				case 3: //Kelvin
					//int convertida;
					std::cout<<"Para qual unidade você quer converter?"<<endl;
					std::cout<<"1- Celsius\n"
						     <<"2- Fahrenheit"<<endl;
					cin>>convertida;
					if (convertida == 1){
						float a = kelvinCelsius();
						cout<<"A temperatura em celsius é "<< a <<endl;
					}
					else{
						float a = kelvinFar();
						cout<<"A temperatura em fahrenheit é "<<a<<endl;
					};

		
			};	
	};	
};

int main(){

	temperatura x;
	x.conversor();
	return 0;


};
