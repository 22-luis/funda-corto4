#include <iostream>

using namespace std;

float nota[100][6];
int n;

int datos()
{
 int na=1,x=0;
 
    cout << "Ingrese el numero de alumnos :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Alumno "<<na<<" :"<<endl;
 
        cout << "Nota 1 :";
        cin >> nota[x][0];
   cout << "Nota 2 :";
        cin >> nota[x][1];
   cout << "Nota 3 :";
        cin >> nota[x][2];
   cout << "Nota 4 :";
        cin >> nota[x][3];
   cout << "Nota 5 :";
        cin >> nota[x][4];
     na++;  
     x++; 
    }
 }
int final()
{
    int na=1,x=0;
for (int i = 0; i < n; i++)
{
  nota[x][5] = nota[x][0]+nota[x][1]+nota[x][2]+nota[x][3]+nota[x][4]; 
    cout << "Nota final de alumno "<<na<<" :"<< nota[x][5]/5<<endl;
na++;
x++;
}
}

int main()
{
    datos();

    final();

    return 0;
}