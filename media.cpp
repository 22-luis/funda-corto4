#include "iostream"

using namespace std;

float  estaturas[25]={1.32,1.5,1.56,1.76,1.64,1.45,1.67,1.77,1.78,1.57,1.55,1.66,1.65,1.52,1.69,1.72,1.61,1.75,1.66,1.49,1.73,1.68,1.54,1.66,1.76};
float me,su = 0;
int media()
{  
for (int i = 0; i < 25; i++)
{
   su = su + estaturas[i];
}
     me =su/25;
   cout << "La media es :" << me << endl;
}
int compara()
{
    int na=0, nb=0;
   for (int i = 0; i < 25; i++)
   {
       if(estaturas[i]<me)
       {
             nb++;
       }
        if(estaturas[i]>me)
       {
             na++;
       }
   }
    cout << "Las alturas debajo de la media son :" << nb <<endl;
    cout << "Las alturas arriba de la media son :" << na<<endl;
}

int main()
{
    media();
    compara();
    
 return 0;   
}