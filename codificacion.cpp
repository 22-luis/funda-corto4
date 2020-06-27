#include "iostream"

using namespace std;

char frase[50];
int cod()
{
   cout << "Digite la frase a codificar :";
  cin.getline(frase,50);   //.getline para que lo tome como un solo elemento aun con espacio
 
  for (char i = 0; i  < 50; i++)
   {
       switch (frase[i])
     {
       {case 'm' : frase[i]=48;break;}    //en codigo binario los numeros inician del 48=0 hasta el 57=9
       {case 'u' : frase[i]=49;break;}
       {case 'r' : frase[i]=50;break;}
       {case 'c' : frase[i]=51;break;}
       {case 'i' : frase[i]=52;break;}
       {case 'e' : frase[i]=53;break;}
       {case 'l' : frase[i]=54;break;}
       {case 'a' : frase[i]=55;break;}
       {case 'g' : frase[i]=56;break;}
       {case 'o' : frase[i]=57;break;}
       {default: frase[i]= frase[i];break;}

     }
   }
       cout << "La frase codificada es :"<< frase;   


}


int main()
{
  cod();
  
return 0;

} 