#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class rev{

private:
        int n,n1,rn=0,d;
        
        public:
                void input();
                void calc();
                void display();
};


void rev::input()
{
        cout<<"\nEnter any positive no. :: ";
        cin>>n;
}

void rev::calc()
{
        n1=n;
        while(n>0){
        	d=n%10;
        	rn=(rn*10)+d;
        	n/=10;
		}
}

void rev::display()
{
                cout<<"\nReverse of [ "<<n1<<" ] is :: "<<rn<<"\n";
}

int main() {
	 rev r;
        r.input();
        r.calc();
        r.display();

	return 0;
}
