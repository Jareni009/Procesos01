 #include <iostream>
 
 using namespace std;
 
 int main ()
 
{
	float n1,n2,total;
	int contador;
	cout<<"1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
	cin>>contador;
	switch (contador)
	{
		case 1:
			cout<<"Primer numero: ";
			cin>>n1;
			cout<<"Segundo numero: ";
			cin>>n2;
			total=n1+n2;
			cout<<"La suma de todo es: "<<total;
			break;
		case 2:
			cout<<"Primer numero: ";
			cin>>n1;
			cout<<"Segundo numero: ";
			cin>>n2;
			total=n1-n2;
			cout<<"La resta total es: "<<total;
			break;
		case 3:
			cout<<"Primer numero: ";
			cin>>n1;
			cout<<"Segundo numero: ";
			cin>>n2;
			total=n1*n2;
			cout<<"La multiplicacion de todo es: "<<total;
			break;
		case 4:
			cout<<"Primer numero: ";
			cin>>n1;
			cout<<"Segundo numero: ";
			cin>>n2;
			total=n1/n2;
			cout<<"La division de todo es: "<<total;
			break;
		default:
			cout<<"Introduce una opcion valida";
			break;
	}
}
