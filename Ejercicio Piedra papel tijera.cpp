#include<iostream>
#include<stdlib.h>
#include<time.h>

/* Juego de Entornos: piedra, papel, tijera.*/

using namespace std;

void piedraPapelTijera(); 
int veces, rival, jugador1, jugador2, ganar1=0, empatar1=0, perder1=0, ganar2=0, empatar2=0, perder2=0;

int main ()			
{
	srand(time(NULL));
	piedraPapelTijera(); 		
}

void piedraPapelTijera()
{
	cout<<"-------------------------------------------------------------------------------------------"<<endl;
	cout<<"PIEDRA, PAPEL, TIJERA. 2 JUGADORES. Victoria: 2 puntos. Empate: 1 punto. Derrota: 0 puntos."<<endl;
	cout<<"-------------------------------------------------------------------------------------------"<<endl;
	cout<<"Cuantas veces quereis jugar? "<<endl;
	cin>>veces;
	cout<<endl;
	cout<<endl;
	
	
	for (int i=0; i<veces; i++)
	{
		cout<<"Jugador 1: Pulsa 1 para piedra, 2 para papel y 3 para tijera: "<<endl;
		cin>>jugador1;
		rival=rand()%(3-1+1)+1;
		if(jugador1==1 && rival==1)
		{
			cout<<"Ambos piedra, empate"<<endl;
			empatar1++;
		}
		if(jugador1==1 && rival==2)
		{
			cout<<"Tu piedra, el rival papel: pierdes"<<endl;
			perder1++;
		}
		if(jugador1==1 && rival==3)
		{
			cout<<"Tu piedra, el rival tijera: ganas"<<endl;
			ganar1++;
		}
		if(jugador1==2 && rival==1)
		{
			cout<<"Tu papel, el rival piedra: ganas"<<endl;
			ganar1++;
		}
		if(jugador1==2 && rival==2)
		{
			cout<<"Ambos papel, empate"<<endl;
			empatar1++;
		}
		if(jugador1==2 && rival==3)
		{
			cout<<"Tu papel, el rival tijera: pierdes"<<endl;
			perder1++;
		}
		
		if(jugador1==3 && rival==1)
		{
			cout<<"Tu tijera, el rival piedra: pierdes"<<endl;
			perder1++;
		}
		if(jugador1==3 && rival==2)
		{
			cout<<"Tu tijera, el rival papel: ganas"<<endl;
			ganar1++;
		}
		if(jugador1==3 && rival==3)
		{
			cout<<"Ambos tijera: empate"<<endl;
			empatar1++;
		}			
	}
		cout<<endl;
		
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		cout<<"El jugador 1 ha perdido "<<perder1<<" veces."<<endl;
		cout<<"El jugador 1 ha empatado "<<empatar1<<" veces."<<endl;
		cout<<"El jugador 1 ha ganado "<<ganar1<<" veces."<<endl;
		cout<<endl;
		cout<<"            				TOTAL PUNTOS JUGADOR 1: "<<(empatar1*1)+(ganar1*2)<<endl;
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		
		
	
	for (int i=0; i<veces; i++)
	{
		cout<<"Jugador 2: Pulsa 1 para piedra, 2 para papel y 3 para tijera: "<<endl;
		cin>>jugador2;
		rival=rand()%(3-1+1)+1;
		if(jugador2==1 && rival==1)
		{
			cout<<"Ambos piedra, empate"<<endl;
			empatar2++;
		}
		if(jugador2==1 && rival==2)
		{
			cout<<"Tu piedra, el rival papel: pierdes"<<endl;
			perder2++;
		}
		if(jugador2==1 && rival==3)
		{
			cout<<"Tu piedra, el rival tijera: ganas"<<endl;
			ganar2++;
		}
		if(jugador2==2 && rival==1)
		{
			cout<<"Tu papel, el rival piedra: ganas"<<endl;
			ganar2++;
		}
		if(jugador2==2 && rival==2)
		{
			cout<<"Ambos papel, empate"<<endl;
			empatar2++;
		}
		if(jugador2==2 && rival==3)
		{
			cout<<"Tu papel, el rival tijera: pierdes"<<endl;
			perder2++;
		}
		
		if(jugador2==3 && rival==1)
		{
			cout<<"Tu tijera, el rival piedra: pierdes"<<endl;
			perder2++;
		}
		if(jugador2==3 && rival==2)
		{
			cout<<"Tu tijera, el rival papel: ganas"<<endl;
			ganar2++;
		}
		if(jugador2==3 && rival==3)
		{
			cout<<"Ambos tijera: empate"<<endl;
			empatar2++;
		}			
	}
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		cout<<"El jugador 2 ha perdido "<<perder2<<" veces."<<endl;
		cout<<"El jugador 2 ha empatado "<<empatar2<<" veces."<<endl;
		cout<<"El jugador 2 ha ganado "<<ganar2<<" veces."<<endl;
		cout<<endl;
		cout<<"            				TOTAL PUNTOS JUGADOR 2: "<<(empatar2*1)+(ganar2*2)<<endl;
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		
		if( ((empatar1*1)+(ganar1*2))> ((empatar2*1)+(ganar2*2)) )
		{
			cout<<"            				GANADOR: JUGADOR 1";
		}
		else
		{
			if( ((empatar1*1)+(ganar1*2))< ((empatar2*1)+(ganar2*2)) )
			{
			cout<<"            				GANADOR: JUGADOR 2";
			}
			else
			{
				cout<<"            			AMBOS JUGADORES HAN EMPATADO.";
			}
		}
		cout<<endl;
		cout<<endl;
		cout<<endl;	
}
