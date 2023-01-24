#include<iostream>

/* Un cliente nos ha pedido que realicemos un programa para el funcionamiento de una máquina expendedora. */

using namespace std;

int main () 

{
	double Precio1=1, Precio2=0.70, Precio3=1.20, Precio4=0.80, Precio=0, Dinero=0, Cambio=0, Falta; 
	 
	int Tecla, Cantidad1=5, Cantidad2=5, Cantidad3=5, Cantidad4=5;
					
		// Declaramos una variable para la bebida elegida en el menú ("tecla"),	
		// el precio de cada bebida (inicializando al precio de cada una) y el de la cantidad de cada una, inicializadas a 5 unidades.
																							  		
	while (1) 
	{																					   
		cout<<" Tecla Producto 	Precio: 	Cantidad:"<<endl<<endl;
		
		cout<<" 1     Coca-cola	"<< Precio1<<"\t\t"<<Cantidad1<<endl;
		
		cout<<" 2     Pepsi    	"<< Precio2<<" 		"<<Cantidad2<<endl;
		
		cout<<" 3     Fanta    	"<< Precio3<<" 		"<<Cantidad3<<endl;
		
		cout<<" 4     Aquarius 	"<< Precio4<<" 		"<<Cantidad4<<endl<<endl;
		
		cout<<"Introduce la tecla: ";
		
		cin>>Tecla;
		
		switch (Tecla) // Hacemos un switch para que muestre la opción elegida y el precio a ingresar, según la tecla elegida.
		{				// Igualamos una variable estandar "Precio" a la variable de cada precio, para operar con la misma variable para todos.
						// Igualamos una variable estandar "Cantidad" a la variable de cada cantidad, para operar con la misma variable para todos.
			case 1:
				
			if (Cantidad1 <= 0) 	// Si la cantidad llega a cero, muestra que el producto está agotado.
			{	
				cout<<"\n\n------------------------PRODUCTO AGOTADO------------------------\n\n"<<endl;
			}
			else
			{
				cout<<"Ha elegido usted Cocacola. Ingrese "<<Precio1 <<"€"<<endl;
				
				Precio=Precio1;		// Asignamos el precio de cada una a "Precio" para poder operar con la misma variable para todas.
			}
			
			break;
			
			case 2:	
			
			if (Cantidad2 <= 0) 	// Si la cantidad llega a cero, muestra que el producto está agotado.
			{	
				cout<<"\n\n------------------------PRODUCTO AGOTADO------------------------\n\n"<<endl;
			}
			else
			{
				cout<<"Ha elegido usted Pepsi. Ingrese "<<Precio2 <<"€"<<endl;
				
				Precio=Precio2;	// Asignamos el precio de cada una a "Precio" para poder operar con la misma variable para todas.
			}	   
			break;
			
			case 3:
				
			if (Cantidad3 <= 0) 	// Si la cantidad llega a cero, muestra que el producto está agotado.
			{	
				cout<<"\n\n------------------------PRODUCTO AGOTADO------------------------\n\n"<<endl;
			}
			else
			{
				cout<<"Ha elegido usted Fanta. Ingrese "<<Precio3 <<"€"<<endl;
				
				Precio=Precio3;		// Asignamos el precio de cada una a "Precio" para poder operar con la misma variable para todas.
			}
					   
			break;
			
			case 4:
				
			if (Cantidad4 <= 0) 	// Si la cantidad llega a cero, muestra que el producto está agotado.
			{	
				cout<<"\n\n------------------------PRODUCTO AGOTADO------------------------\n\n"<<endl;
			}
			else
			{
				cout<<"Ha elegido usted Aquarius. Ingrese "<<Precio4 <<"€"<<endl;
				
				Precio=Precio4;		// Asignamos el precio de cada una a "Precio" para poder operar con la misma variable para todas.
			}
				   
			break;
			
			default: cout<<"Opción incorrecta";
		}
		
			cin>>Dinero;	// Introducimos el dinero.
									
			while (Dinero<Precio)  // Mientras que el dinero ingresado sea menor que el precio, pedirá ingresar lo que falta (precio-dinero)
									// Se lo asignamos a "Falta", que será la nueva cantidad ingresada y se agrega al Dinero.
				{	
					Falta = Precio-Dinero;
					
					cout<<"Ingrese "<<Falta <<"€"<<endl;
					
					cin>>Falta;
					
					Dinero=Dinero+Falta;
				}
				if (Dinero>Precio)
				{
					Cambio=Dinero-Precio; // Si el dinero ingresado es mayor que el precio, asignamos 
					
					cout<<"recoja su cambio: "<<Cambio<<endl;	// a "Cambio" la diferencia y pedimos que la recoja.

				}
				if (Dinero>=Precio)		// Si el dinero es igual al precio (la consecución final), pedimos que recoja el producto.
				{
					cout<<"Recoja el producto"<<endl;
				}
				

		switch (Tecla)	// Con otro switch para la misma opción de tecla, se descontará 1 unidad del producto elegido
		{ 
			case 1: Cantidad1=Cantidad1-1; break; 
			
			case 2: Cantidad2=Cantidad2-1; break; 
			
			case 3: Cantidad3=Cantidad3-1; break;
			
			case 4: Cantidad4=Cantidad4-1; break;
		}	
	
	    cout << "-----------------------------------------------------------------\n";	
																
	}	
		return 0;
			
}
