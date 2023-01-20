#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class largest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"\nEnter 1st number :: ";
                cin>>x;
                cout<<"\nEnter 2nd number :: ";
                cin>>y;
                cout<<"\nEnter 3rd number :: ";
                cin>>z;
        }

        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);

                cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
        }
};
int main() {
	largest g;
        g.input();
        g.calc();

	return 0;
}
