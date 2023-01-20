#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class sum{
	private: 
	int a;
	int b=0;
	public:
	
		void cal();
		void display();
};

void sum::cal(){
	for(a=1;a<=100;a+=2)
	b=b+a;
}
void sum::display(){
	cout<<"The sum of even number : "<<b<<endl;
}
int main() {
	sum s;
	s.cal();
	s.display();
	return 0;
}
