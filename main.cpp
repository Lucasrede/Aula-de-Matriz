/*#include <iostream>

using namespace std;

int main() {

  int matriz[5][5], i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cout << "Informe o valor de (" << i << "," << j << ") = ";
      cin >> matriz[i][j];
    }
  }
  cout << "\n\nFIM DA ENTRADA\n\n";

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cout << matriz[i][j];
      cout << "\t";
    }
    cout << "\n";
  }
  return 0;
}
*/

//2-Algoritmo para construir uma matriz de 5 linhas e 5 colunas e mostrar como esta matriz é varrida em i e em j
/*
#include <iostream>

using namespace std;

int main (){
	int contadorI=0, contadorJ=0;
	int mat1[5][5];
	cout<<"Abaixo voce ve os valores de i e j em cada iteracao em uma matriz 5x5:\n\n";
	for (int i=0; i<5; i++){
		cout<<endl;
		contadorI+=1;
		cout<<"Quando i fica fixo em "<<i<<", j varia!\t";
		for (int j=0; j<5; j++)
			{
				cout<<"j="<<j<<"\t";
				contadorJ+=1;
			}
			cout<<"\n\n\n";
}
cout<<"Passou por i "<<contadorI<<" vezes"<<endl;
cout<<"Passou por j "<<contadorJ<<" vezes"<<endl;
return 0;
}*/

//3-Faça um teste de mesa para o programa a seguir e informe o que este programa faz.
/*
#include <iostream>
using namespace std;
int main ( ){
int I, J;
int mat1[5][5], cont=1;
cout<<"Abaixo voce ve os valores de i e j em cada iteracao em uma matriz 5x5:\n";
for (int I=0; I<5; I++){
	cout<<endl;
	for (int J=0; J<5; J++)
	{
		mat1[I][J]=cont;
		cout<<mat1[I][J]<<" ";
		cont++;
	}
}
return 0;
} */

//4-Faça um teste de mesa e informe o funcionamento do programa. O que ele produz como saída?
/*
#include <iostream>
using namespace std;
int main ( ){
int I, J;
int mat1[5][5], cont=1;
cout<<"Abaixo voce ve os valores de i e j em cada iteracao em uma matriz 5x5:\n";
for (int I=0; I<5; I++){
	cout<<endl;
	for (int J=0; J<5; J++)
	{
		if (I>J){
		mat1[I][J]=0;
		}
		else if (J>I){
  		mat1[I][J]=2;
		}
		else{
   		mat1[I][J]=1;
		}
		cout<< mat1[I][J]<<" ";
 	}
}
return 0;
} */