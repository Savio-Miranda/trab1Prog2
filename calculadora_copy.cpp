#include <iostream>
using namespace std;




class Calculadora{
	public:
		int n1, n2;
	
		//std::cin<<n1<<endl;
		//std::cin<<n2<<endl;
	
		double product(){
			double a, b;
			std::cout<<"Digite o valor 1 a ser multiplicado: ";
                        std::cin>>a;
                        std::cout<<"Digite o valor 2 a ser multiplicado: ";
                        std::cin>>b;	
			return a*b;
		}
		double sum(){
			double a, b;
			std::cout<<"Digite o valor 1 a ser somado: ";
			std::cin>>a;
			std::cout<<"Digite o valor 2 a ser somado ";
			std::cin>>b;
			return a+b;

		}
		double difference(){
			double a,b;
			std::cout<<"Digite o valor minuendo: "<<endl;
			std::cin>>a;
			std::cout<<"Digite o valor subtraendo: "<<endl;
			std::cin>>b;
			return a-b;
		}
		double quotient(){
			double a, b;
			std::cout<<"Digite o dividendo: "<<endl;
			std::cin>>a;
			std::cout<<"Digite o divisor: "<<endl;
			std::cin>>b;
			return a/b;
		}
		
		
		






};
int main(){
	Calculadora x;
	std::cout<<x.quotient()<<endl;
	return 0;
}

	
