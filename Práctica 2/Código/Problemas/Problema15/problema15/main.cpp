#include <iostream>

using namespace std;
void rectangle_intersection(int *p1, int *p2, int *p3);
int main()
{
    unsigned short int op=1;
    do {
        int rect_1[]={0,0,8,4}, rect_2[]={5,2,5,7}, rect_3[]={0,0,0,0};
        int *ptr_1=rect_1, *ptr_2=rect_2, *ptr_3=rect_3;
        rectangle_intersection(ptr_1, ptr_2, ptr_3);
        for(int i=0; i<4; i++)
            cout<<rect_3[i]<<",";

        cout<<endl<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
void rectangle_intersection(int *p1, int *p2, int *p3){
    //Verificar que si intersectan los triangulos
    int x=0, y=1, w=2, h=3;
    if(p2[x] < (p1[x]+p1[w]) && p2[y] < (p1[y]+p1[h])){
        //x2>=x1
        if(p2[x]>=p1[x]){
            p3[x]=p2[x];
            p3[w]=p1[w]-p2[x]+p1[x];
        }
        if(p2[y]>=p1[y]){
            p3[y]=p2[y];
            p3[h]=p1[h]-p2[y]+p1[y];
        }
    }
    else if((p2[x]+p2[w]) > p1[x] && (p2[y]+p2[h]) > p1[y]){
        //x2<x1
        if(p2[x]<p1[x]){
            p3[x]=p1[x];
            p3[w]=p2[w]+p2[x]-p1[x];
        }
        if(p2[y]<p1[y]){
            p3[y]=p1[y];
            p3[h]=p2[h]+p2[y]-p1[y];
        }
    }

}
