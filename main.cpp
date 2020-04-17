//FACTORIAL Y FIBONACCI

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int factorial1 (int n,int &c);
int factorial2(int n,int &c);
int fibo1(int n,int &c);
int fibo2(int n,int &c);

char menu(){
	char opcion;
	cout<<"\tMENU \n"<<endl;
	cout<<"(F) Factorial \n";
	cout<<"(I) Finonacci \n";
	cout<<"(S) Salir \n";
	cout<<"Escoja una opcion : ";
	cin>>opcion;
	return opcion; 
}

int main(int argc, char** argv) {
	int n=0,c;
	char opc;
	
	do{
		opc=menu();
		switch(opc){
			case 'F':
			case 'f':
				
				cout<<"Digite el numero: "<<endl;
				cin>>n;
				cout<<"El factorial iterativo es: "<<factorial1(n, c)<<endl;
				cout<<"Numero de operaciones: "<<c<<endl;
				//c=0;
				cout<<"El factorial recursivo es: "<<factorial2(n, c)<<endl;
				cout<<"Numero de operaciones: "<<c<<endl;
				break;
				
			case 'I':
			case 'i':
				
				cout<<"Digite el numero: "<<endl;
				cin>>n;
				cout<<"El fibonacci iterativo es: "<<fibo1(n, c)<<endl;
				cout<<"Numero de operaciones: "<<c<<endl;
				c=0;
				cout<<"El fibonacci recursivo es: "<<fibo2(n, c)<<endl;
				cout<<"Numero de operaciones: "<<c<<endl;
				break;			
		}
		
	}while(opc != 'S' && opc != 's');
	
	/*
	cout<<"Resultado metodo 1: "<<factorial1(numero, cont1)<<"\n";
	cout<<"Operaciones: "<<cont1<<endl;
	cout<<"Resultado metodo 2: "<<factorial2(numero,cont2 )<<"\n";
	cout<<"Operaciones: "<<cont2<<endl;
	*/
	
	
	system("PAUSE");
}

int factorial1(int n,int &c){//FACTORIAL ITERATIVO
	c=0;
	int fact =1;
	for(int k=1;k<=n;k++){
		c++;
		fact*=k;
	}
	return fact;
}

int factorial2(int n,int &c){//FACTORIAL RECURSIVO
	
	int fact =1;
	if(n>0){   
		fact=factorial2(n-1,c);
		c++; 
		return fact*n;
	}
	c=0;
	return 1;
}

int fibo1(int n,int &c){//FIBO ITERATIVO
	c=0;
	int num1=0,num2=1,num3=0;
	if(n>1){
		for(int i=2;i<=n;i++){
			c++;
			num3=num1+num2;
			num1=num2;
			num2=num3;
		}	
	}else{
		return n;
	}	
	return num3;
}

int fibo2(int n,int &c){//FIBO RECURSIVO
	int fb1,fb2;
	if(n>1){
		fb2= fibo2(n-2,c);
		fb1=fibo2(n-1,c);
		c++;
		return fb2+fb1;
	}else{
		c=0;
		return n;
	}
}



