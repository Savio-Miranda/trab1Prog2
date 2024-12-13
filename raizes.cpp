#include <iostream>
#include <cmath>
using namespace std;



class polinomio{
	public:
	double a, b, c, x1, x2;
	double raizes(){
		std::cout<<"qual o valor de a? "<<endl;
		std::cin>>a;
		std::cout<<"qual o valor de b? "<<endl;
		std::cin>>b;
		std::cout<<"qual o valor de c? "<<endl;
		std::cin>>c;
		double delta; 
		delta = pow(b, 2) - (4 * a * c);
		delta = sqrt(delta);
		x1 = (b*(-1))+delta;
		x1 = x1/(2*a);
		x2 = (b*(-1))-delta;	
		x2 = x2/(2*a);
		std::cout<<"x1: "<<x1<<endl;
		std::cout<<"x2: "<<x2<<endl;		
		
		return x1, x2;
		
	}


};

int main(){
	polinomio q;
	q.raizes();
	return 0;
}




