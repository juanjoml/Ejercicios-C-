#include <iostream>

//Crea una matriz bidimensional para representar las plazas de aparcamiento de un garaje de 4x4 plazas. 
// Un coche aparcado es un 1, plaza libre un 0.
//Luego pedir� que introduzcamos una posici�n y pasar� a ocupada (1) o al retirar el coche pasar� a (0). 
// Adem�s, que nos cuente las plazas libres.


using namespace std;

//Variables globales:
int garaje [4][4];

//Declaraci�n de funciones:
void aparcamiento ();		// Para mostrar el aparcamiento con sus plazas ocupadas y libres.
void aparcar ();			// Para aparcar.
void desaparcar ();			// Para desaparcar.
void salir ();				// Para salir.

int main ()
{
	
	for (int i=0; i<4; i++)		
	{
		for (int j=0; j<4; j++)	// Recorremos la matriz
		{
			garaje[i][j]=0;		// Y le asignamos a todas sus celdas el valor 0 (todas las plazas libres).
		}
	}
	aparcamiento ();			// Llamamos a la funci�n "aparcamiento":
}

//Funciones:

void aparcamiento ()
{	
	int opcion=0;									// Mostramos un icono del aparcamiento,
	cout<<"______________________________"<<endl;
	cout<<"|                            |"<<endl;
	cout<<"|    GARAJE DEL CARREFOUR    |"<<endl;
	cout<<"|____________________________|"<<endl;
	
	for (int i=0; i<4; i++)				// y recorriendo la matriz, mostramos lo que tiene cada celda (ahora, todo libre).
	{
		for (int j=0; j<4; j++)
		{
			cout<<"  "<<garaje[i][j]<<"     ";  // Introduzco espacios para separar los valores de las celdas.
		}
		cout<<endl;
	} 
		
	cout<<"Para aparcar pulse 1"<<endl;  	// Imprimimos las distintas opciones:
	cout<<"Para desaparcar pulse 2"<<endl;
	cout<<"Para salir pulse 3"<<endl;
	
	cin>>opcion;	// La introducimos:
	
	switch(opcion){		// LLamamos a la funci�n aparcar:
	case 1:
		aparcar ();
		break;
	
	case 2:
		desaparcar ();	// Llamamos a la funci�n desaparcar:
		break;
	
	case 3:
		salir ();		// Llamamos a la funci�n salir:
		break;
		default: break;	// En otro caso, salimos
	}
}

void aparcar ()
{
	int i, j;
	
	cout<<endl;
	
	cout<<"Selecciona la coordenada x para aparcar: "; cin>>i; // Pedimos las coordenadas del aparcamiento.
	
	cout<<"Selecciona la coordenada y para aparcar: "; cin>>j;
	
	if(garaje[i][j]==1)			
	{
		cout<<"Hay un coche aparcado en ese sitio"<<endl;	// Si est� ocupado, imprime el aviso y nos devuelve
		aparcar ();											// a la funci�n "aparcar" para reintentar.	
		return; //-------------------------???
	}
	
	garaje[i][j]=1;		// Si no, asigna a esa celda 1 (aparcado).
	
	system("cls");    //Este comando hace que se borre la pantalla.
	
	aparcamiento();   //Llamo de nuevo a la funci�n "aparcamiento" para mostrar el men�.
}

void desaparcar ()
{
	int i, j;
	
	cout<<"Indica la coordenada x para desaparcar: "; cin>>i;	// Pedimos las coordenadas del aparcamiento.
	
	cout<<"Indica la coordenada y para desaparcar: "; cin>>j;
	
	if(garaje[i][j]==0)
	{
		cout<<"No hay coche aparcado en ese sitio"<<endl;	// Si est� desocupado, imprime el aviso y nos devuelve
		desaparcar ();										// a la funci�n desaparcar para reintentar.
		return;		//-----------------------???
	}
	
	garaje[i][j]=0;		// Si no, asigna a esa celda 0 (desaparcado).
	system("cls");		//Este comando hace que se borre la pantalla.
	aparcamiento();		//Llamo de nuevo a la funci�n "aparcamiento" para mostrar el men�.

}

void salir ()		// Limpiamos la pantalla, imprimimos que has cerrado la aplicaci�n y salimos.
{
	system("cls");
	cout<<"Has cerrado la aplicacion";
}

