#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

char menu(){
	char op;
	cout<<"\n\tInsira a opcao pretendida:\n\t(A) - Adicao\n\t(B) - Subtracao\n\t(C) - Divisao\n\t(D) - Multiplicacao\n\t(E) - Media\n\t(F) - Porcentagem\n\t(G) - R.3 Simples\n\t(S) - Sair \n          Em seguida selecione ENTER\n";

	return op;
}

int main(int argc, char** argv) {
	
	char op;
	int a, b,count,d,final;
	float c=0,media;
	
	cout <<"\n\t\t\t\t\t\t\t\t\tCalculadora C++\n";
    menu();
cin >>op;
	switch (op){
		
	case 'a':
	case 'A':
		
	cout<<"\nInsira o primeiro numero: ";
		cin >> a;
		cout<<"\nInsira o segundo numero: ";
		cin >>b;
	a= a + b;
	cout <<"\n\t O resultado obtido foi: "<<a;	
		break;
		
		case 'b':
		case 'B':
		cout<<"\nInsira o primeiro numero: ";
		cin >> a;
		cout<<"\nInsira o segundo numero: ";
		cin >>b;
		a= a- b;
	cout <<"\n\t O resultado obtido foi: "<<a;
	break;
	
	case 'c':
	case 'C':
cout<<"\nInsira o primeiro numero: ";
		cin >> a;
		cout<<"\nInsira o segundo numero: ";
		cin >>b;
	a= a / b;
   cout <<"\n\t O resultado obtido foi: "<<a;
	break;
	
	case 'd':
	case 'D':
	cout<<"\nInsira o primeiro numero: ";
		cin >> a;
		cout<<"\nInsira o segundo numero: ";
		cin >>b;
		a= a * b;
		 cout <<"\n\t O resultado obtido foi: "<<a;
	break;
	
	case 'e':
 	case 'E':
 		cout<<"\nInsira os numeros pretendidos para a media e (0) para terminar: ";
 		
 	
 	while (a != 0)
 	cin >> a; 
	for (int j = 0; j < count; j++)
	c = a + c;
	count ++;
	
	media = c / count ;
	cout <<"\n\t O resultado obtido da media foi: "<<media;
	break;
	
	
	case 'f':
	case'F':
		cout <<"Insira um numero para saber sua porcentagem: ";
		cin >>a;
		c= a +c;
	c = c /100;
	cout<<"A porcetagem do numero escolhido e: "<< c<<"%";
	break;
	
	
	case 'g':
	case 'G':
		cout <<"\nSiga os passos a passos para conseguirmos realizar esta operacao.\n";
		Sleep (2000);
		cout<<"Insira como as instrucoes                            A                         B\n\n";
		cout<<"                                                     C                         FINAL\n\n";
		
	   cout<<"                                                      A: ";
	   cin >> a;
	   cout<<"                                                                                 B: ";
	   cin >> b;   
	   cout<<"                                                      C: ";
	   cin>> d;
		final= d * b / a;
		c = final + c;
	   cout<<"                                                                                 Resultado: "<<c;
		break;
		
	case 's':
	case'S':
			cout<<"Encerrou o programa";
	break;
	
	default: 
	cout <<"Opcao invalida tente novamente: ";
	cin >>op;
	return op;
	}
	
	
	return 0;
}
