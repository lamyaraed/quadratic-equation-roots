#include <iostream>
#include <cmath>

using namespace std;
char cov = 'y' ;
char cov1 = 'y';
char cov2 ;
int main()
{

    while (cov1 == cov ){

    cout << "Welcome!"<< endl;
    cout << "if you want to start the program enter 1 " << endl;
    int m ;
    cin >> m ;
    double x;
    double x1;
    double x2;
    double a;
    double b;
    double d;
    double c;
    double z; // z= b^2 - 4ac
    double y; // y = d + sqr (z)/2a
    double v; // v = d - sqr(z)/2a
    double f;
    if (m==1) {
            cout <<" please enter x^2 coefficient  " ;
            cin >> a;
            cout << endl;
            cout << " please enter x coefficient  ";
            cin >> b;
            cout << endl;
            cout <<" please enter the free term  ";
            cin >> c;
            cout << endl;
            cout << " your equation is = " << a << "x^2 +" << b << "x +" << c << endl;
            z = (b*b) - (4 * a * c);
            cout << " the value of the discriminant is = " << z << endl;
            if (z == 0){
                d = b * (-1);
                y = ( d + sqrt(z) ) / (2 *a);
                y = y * (-1);
                cout  << " this equation has a single real root which is : (x," << y << ")" << endl;
            }
            if ( z > 0 ){
                d = b * (-1);
                y = ( d + sqrt(z) ) / (2 *a);
                y = y * (-1);
                v = ( d - sqrt(z) ) / (2 *a);
                v = v * (-1);
                cout << " this equation has two real roots which are : (x," << y << ") and (x," << v << ")" << endl;
            }
            if ( z < 0 ) {
                d = b * (-1);
                y = ( d + sqrt(z) ) / (2 *a);
                y = y * (-1);
                v = ( d - sqrt(z) ) / (2 *a);
                v = v * (-1);
                cout << " this equation has two complex roots which are : (x," << y << ") and (x," << v << ")" << endl;

            }

    }

    cout<<"if you wont to use the program again enter y "<<endl;
    cout << "if you want to end the program enter n" << endl;
    cin>>cov2;
    cov = cov2 ;
    }
    cout << "goodbye!" <<endl;
    return 0;
}
