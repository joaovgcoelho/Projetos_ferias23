#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

void introducao();
void linha ();
void linha2 ();
void ginasio();
void vida_articunos();
void charmander();
void cura_atq();
void oportunidade();  

int main(int argc, char** argv) {
	
	char escolhido;
	string nome_jogador;
   int pokint;
   
   int articunos_life=200;
   int articunos_atq=62;
   
   	int grenija=155;
 	int atq_gre=66;
 	int cura_gre55;
 	
 	int charmander=125;
 	int atq_char = 42;
 	int cura_char=46;
 	
int vida_extra=45;

introducao();
	Sleep (800);
	
	cout <<"\n\n\t\tOla seja Bem Vindo ao seu jogo Pokemon\n";
	Sleep (1500);
	
    cout <<"\n\t\tRegiste seu nome de treinador: ";
	     cin>> nome_jogador;
	
	cout <<"\n\t\tSeu nome de treinador "<< nome_jogador<<" foi aceito.";
	linha();
	
Sleep (2000);

	cout <<"\n\n\tEscolha seu Pokemon:\n\n";
	
	cout <<"\tA- Charmander XP 125\t Ataque 42\tCura 46\n";
	cout <<"\tB- Pikachu  XP 140 \t Ataque 45\tCura 53\n";
	cout <<"\tC- Greninja XP 155 \t Ataque 66 \tCura 55\n";
	cout <<"\tEscolha entre as opcoes ( A, B OU C )";
	cin>> escolhido; 
	
switch (escolhido){
	
	 case 'a':
	 case 'A':
	 	cout <<"\n\tEntao voce ira batalhar com o Charmander correto, vamos para a batalha "<<nome_jogador<<"\n";
	 	break;
	 	
	 	case'b':
	 		case'B':
			 cout <<"\n\tEntao voce ira batalhar com o Pikachu correto, vamos para a batalha "<<nome_jogador<<"\n";
			 break;
			 
			 case 'c':
			 case 'C':
			 cout <<"\n\tEntao voce ira batalhar com o Greninja correto, vamos para a batalha "<<nome_jogador<<"\n";
	         break;
	         
	default:
		cout<<"\n\tOpcao invalida Mane, as opcoes sao (A, B OU C)\n";
		cin>> escolhido;
		
		if(escolhido == 'a'&& 'A')
		cout <<"\tEntao voce ira batalhar com o Charmander correto, vamos para a batalha "<<nome_jogador<<"\n";
		
		else if (escolhido == 'b'&&'B' )
			cout <<"\tEntao voce ira batalhar com o Pikachu correto, vamos para a batalha "<<nome_jogador<<"\n";
			
		else if (escolhido =='c' && 'C')
			cout <<"\tEntao voce ira batalhar com o Greninja correto, vamos para a batalha "<<nome_jogador<<"\n";
			else 
			cout <<"\nOpcao invalida";		
	}
		linha();
	    ginasio();
	    
		if (escolhido == 'a'&&'A')
		
		Sleep (900);
		
		cout << "\n\t\tArticunos XP "<< articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP" <<charmander;
		Sleep(2500);

		cout <<"\n\t\t\t\t\t\t\t\t\t"<<"   A batalha ira comecar";
			 Sleep (3000);
			 cout<<"\n\t\t\t\t\t\t\t\t"<<"       Articunos comecou o combate.\n";
		
	
		Sleep (1500);
		charmander = charmander - articunos_atq;
		cout<<"\n\t\t\t\t\t\t\t\t     Charmander levou um grande dano\n ";
		
		Sleep(2000);
		cout <<"\n\t\tArticunos XP "<< articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<< charmander;
		
		Sleep(4000);
		cout <<"\n\t\t\t\t\t\t\t\t\t\t  Sua Vez";
		
		Sleep (1000);	
	cout <<"\n\n\t\t\t\t\t\t\t\t"<<nome_jogador<<" Voce prefere Atacar(A)ou Curar(B)";
		
		char resposta;
		cin>> resposta;
		
switch(resposta){
	
	case 'a':
		case 'A':
		articunos_life= articunos_life - atq_char;
	cout <<"\n\t\t\t\t\t\t\t\t\t    Que ataque Insano uau";
	
	Sleep (1100);
	cout << "\n\t\tArticunos XP "<<articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
	
	case 'b':
		case 'B':
		charmander= cura_char + charmander;
	cout << "\n\t\t\t\t\t\t\t\t Que Bom que decidiu curar o seu pokemon";
	
	Sleep (1100);
cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
}

Sleep(3000);
	  system ("clear|| cls");
	  
	  cout <<"\n\t\t\t\t\t\t\t\t\t       Vez do Articunos\n";
	  Sleep(2500);
	  
	      cout <<"\n\t\t\t\t\t\t\t\t       Articunos te causou um dano fatal\n";
	       Sleep(2000);
	       
	  charmander =charmander - articunos_atq;
      cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
      
      Sleep (2000);
      cout <<"\n\t\t\t\t\t\t\t\t Seu pokemon recebera vida extra, prepare-se.";
      
	  int life_extra=90;
	  charmander = charmander + life_extra;
	  Sleep(2500);
      cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;

	cout <<"\n\t\t\t\t\t\t\t\t\t\t  Sua Vez";
		
		Sleep (1000);	
	cout <<"\n\n\t\t\t\t\t\t\t\t"<<nome_jogador<<" Voce prefere Atacar(A)ou Curar(B)";
	
		cin>> resposta;
		
switch(resposta){
	
	case 'a':
		case 'A':
		articunos_life= articunos_life - atq_char;
	cout <<"\n\t\t\t\t\t\t\t\t\t    Que ataque Insano uau";
	
	Sleep (1100);
	cout << "\n\t\tArticunos XP "<<articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
	
	case 'b':
	case 'B':
		charmander= cura_char + charmander;
	cout << "\n\t\t\t\t\t\t\t\t Que Bom que decidiu curar o seu pokemon";
	
	Sleep (1100);
cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
}
Sleep (800);
	cout <<"\n\t\t\t\t\t\t\t\t\t        Vez do Articunos";
	charmander= charmander - articunos_atq;
	Sleep (900);
	cout <<"\n\n\t\t\t\t\t\t\t\t    Articunos te causou um grande dano";
	Sleep (1200);
	cout << "\n\t\tArticunos XP "<<articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	Sleep (800);
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Sua vez";
	Sleep(1200);
		cout <<"\n\n\t\t\t\t\t\t\t\t"<<nome_jogador<<" Voce prefere Atacar(A)ou Curar(B)";
	
		cin>> resposta;
		
switch(resposta){
	
	case 'a':
		case 'A':
		articunos_life= articunos_life - atq_char;
	cout <<"\n\t\t\t\t\t\t\t\t\t    Que ataque Insano uau";
	
	Sleep (1100);
	cout << "\n\t\tArticunos XP "<<articunos_life<<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
	
	case 'b':
	case 'B':
		charmander= cura_char + charmander;
	cout << "\n\t\t\t\t\t\t\t\t Que Bom que decidiu curar o seu pokemon";
	
	Sleep (1100);
cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	break;
	
	
}
	Sleep (2000);
	  oportunidade();
	  
	  Sleep (5000);
	  cout <<"\n\n\t\t\t\t\t\t\t\t\t\tUAU";
	  
	  Sleep (2000);
	  cout <<"\n\n\n\t\t\t\t\t\t\t\t\t\tContinue assim";
	  
	   articunos_life= articunos_life - articunos_life;
	   Sleep(3000);
	  cout <<"\n\n\t\t\t\t\t\t\t\t\tVoce conseguiu parabens, o dano foi fatal";
	  
	  Sleep (3000);
	  cout <<"\n\t\t Articunos XP "<< articunos_life <<"\t\t\t\t\t\t\t\t\t\t\t\t\tCharmander XP "<<charmander;
	  
	  	  Sleep (1800);
	  cout <<"n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tWIN";
	  Sleep (1220);
	  cout <<"\n\t\t\t\t\t\t\t\t\t\t Voce venceu";
	  
	return 0;
}




void introducao (){
	

   cout << "\t\t\t\t\t _______________________________________________________________________________________\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                        Welcome                                        |\n";
	cout <<"\t\t\t\t\t|                                           To                                          |\n";
	cout <<"\t\t\t\t\t|                                        Pokemon                                        |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";		
   cout << "\t\t\t\t\t|_______________________________________________________________________________________| \n";
	
}

void linha (){
	 cout << "\n\t\t----------------------------------------------------------------------------------------------\n";
}

void vida_articunos(){
	
	int Articunos=250;
	int atq_art=67;
	
}

 void ginasio(){
 	
 	
 	Sleep (3000);
system("clear||cls");

	 cout<<"\t\t\t\t\t _______________________________________________________________________________________\n";
	cout <<"\t\t\t\t\t|                                    GINASIO DE KALOS                                   |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                               ARTICUNOS ESTA A SUA ESPERA                             |\n";	
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                       PREPARE-SE                                      |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";	
	cout <<"\t\t\t\t\t|                                           !!!                                         |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";
	cout <<"\t\t\t\t\t|                                                                                       |\n";	                                                  
   cout << "\t\t\t\t\t|_______________________________________________________________________________________|\n";
	
	Sleep(1500);
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t     GO\n";
 }
 
 void grenija(){
 	int grenija=155;
 	int atq_gre=66;
 	int cura_gre55;
 	
 }
 
 void charmander(){
 	int charmander=125;
 	int atq_char = 38;
 	int cura_char=46;
 }
 
 void pikachu(){
 	int pikachu=140;
 	int atq_pika=45;
 	int cura__pika =53;
 }
 
void linha2 (){
	 cout << "\n\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
}
 	
 	
 void oportunidade(){
 	
 	cout <<"\n\n";
 	cout<<"\t\t\t\t\t_______________________________________________________________________________________\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t|                                   OPORTUNIDADE                                       |\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t|                      Selecione a tecla 'S' para causar um dano                       |\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t|                                  FATAL em Articunos                                  |\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t|                                                                                      |\n";
 	cout<<"\t\t\t\t\t_______________________________________________________________________________________\n";
 	
 	
 }
 
