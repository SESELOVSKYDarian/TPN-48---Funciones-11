#include <iostream>
using namespace std;
float CalcularPeso(float peso);

int main()
{
    float peso;
    cout<<"Ingrese su peso: ";
    cin>>peso;
    cout<<"El peso en la Luna seria de: "<<CalcularPeso(peso)<<endl;
    return 0;
}

float CalcularPeso(float peso)
{
	float pesoenluna;
	pesoenluna=(peso/9.81)*1.622;
    return pesoenluna;
}
