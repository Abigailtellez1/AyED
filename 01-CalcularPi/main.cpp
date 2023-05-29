#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double pi=0, n=1;
    for (int i = 0 ; abs(n*4) > 0.0000001; i++)    // hasta que n se considere lo suficientemente pequeño
    {
        n= pow(-1,i)/(2*i+1);
        pi+= n;

    }
    cout << setprecision(6)<< fixed << pi*4 ;

}
