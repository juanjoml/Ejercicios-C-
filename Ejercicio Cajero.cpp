#include<iostream>

/*Hacer un programa que simule un cajero autom�tico con un saldo inicial de 10000 D�lares.
No aceptar� ingresos inferiores a 20 � ni superiores a 1000 �, ni retiros inferiores a 20 � ni superiores a 500 �.
Los retiros llevar�n adem�s una comisi�n de 3 �. */

using namespace std;

int main()
{

    int opcion; // Declaramos una variable para el men� del cajero ("opcion"), que usaremos en un switch.
    
	float saldo=1000, ingreso, retiro; // Declaramos las variables "saldo" (que tiene 10000 �), "ingreso" para
                                                // la cantidad a ingresar, "retiro" para la cantidad a retirar.
                                                                                              
    while(1)  // While(1)=bucle infinito.
    
	{	cout<<"Pulse 1 para ingresar dinero en tu cuenta"<<endl; // Imprimimos las 3 opciones de men�.

		cout<<"Pulse 2 para retirar dinero de tu cuenta"<<endl;

		cout<<"Pulse 3 para salir"<<endl;

		cout<<"Opcion: ";

		cin>>opcion; // Introducimos la opci�n deseada.
		
		switch(opcion)
			{
				case 1: cout<<"Cuanto desea ingresar? "; //Preguntamos la cantidad a ingresar.
		
				cin>>ingreso;                   // Introducimos dicha cantidad ("ingreso")
				
				if (ingreso<20 || ingreso>1000)  // Mientras el ingreso sea menor que 20 o mayor que 1000, dar� opci�n incorrecta.
                {
                    cout<<"Opcion incorrecta. Vuelta a intentarlo."<<endl;
                    
					cout<<endl;	
                }
                
                else
                {
                	if (ingreso>=20 && ingreso<=1000)
                	{
                		saldo = saldo + ingreso;    // En caso correcto, el saldo ser� este m�s dicho ingreso.
                	
                		cout<<"Total en cuenta: "<<saldo<<endl;   // Lo mostramos.
                		
						cout<<endl;                            
					}
				}
				
				break;	// Y salimos.
                
				case 2: cout<<"Cuanto desea retirar? ";  //Preguntamos la cantidad a retirar.

				cin>>retiro;                    // Introducimos dicha cantidad ("retiro")

				if (retiro<20 || retiro>500) 	// Mientras el retiro sea menor de 20 o mayor de 500, sale y vuelve al men�.
                {
                    cout<<"Opcion incorrecta. Vuelta a intentarlo."<<endl;
                    
                    cout<<endl;
                    
                }

				if(retiro>=20 && retiro<=500 && retiro+3>saldo)  // Si el retiro est� en el intervalo correcto (20-500), pero junto a la comisi�n (3)
                {												// es mayor que el saldo, imprime que es insuficiente.
                    cout<<"Saldo insuficiente"<<endl;
                    
                    cout<<endl;	 
                }
                    
				else		// En cambio, si el retiro est� en el intervalo correcto (20-500), y junto a la comisi�n (3) es menor o igual que el saldo:
				{
					if (retiro>=20 && retiro<=500 && retiro+3<=saldo) 
					{
						saldo=saldo-retiro-3;   // El saldo ser� este menos dicho retiro y la comisi�n

						cout<<"Dinero en cuenta: "<<saldo<<endl;  // Lo mostramos.
						
						cout<<endl;
					}                             
				}
				
				break; 					// Y salimos.
				
        		case 3: 
        
        		system("cls");	// Limpiamos la pantalla.
        
				break; 		// Salimos directamente.
		                             
				default: cout<<"Opcion incorrecta"<<endl;
				
				cout<<endl;	
				
				break; // Si elige una opcion que no sea ninguna de las 3, avisar� como "opci�n incorrecta" y saldr�.
			}
	}

}

