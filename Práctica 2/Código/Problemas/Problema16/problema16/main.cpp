#include <iostream>

using namespace std;

int main()
{
    int n=0, cant_ways=0;
    int **mesh=nullptr;
    cout << "Ingrese un numero entero positivo para hacer una malla y hallar los caminos posibles: " << endl;
    cin>>n;
    /*Trabajando con arreglos dinamicos ya que el tam de la malla depende del usuario*/
    mesh= new int*[n]{nullptr};
    for(int i=0; i<=n; i++){
        mesh[i]=new int[n];
    }

    for(int x=0; x<=n; x++){
        for(int y=0; y<=n; y++){
            if(x==0 || y==0)
                cant_ways=1;
            else
                cant_ways=mesh[x-1][y]+mesh[x][y-1];

            mesh[x][y]=cant_ways;
        }
    }

    cout<<"Para la malla "<<n<<"x"<<n<<" la cantidad de caminos"
                                       "posibles es: "<<cant_ways<<endl;
    delete [] mesh;
    return 0;
}
