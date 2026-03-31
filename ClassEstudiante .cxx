#include<string>
#include<iostream>
#include<vector>
using namespace std ;
 class Estudiante {
    private:
    string nombre;
    string carnet;
    vector<double>nota;
    
    public:
    //Constructor 
    Estudiante(string nom , string CI){
       nombre=nom;
       carnet=CI;
       cout<<"Se ha registrado el estudiante :"<<nombre<<"CI: "<<carnet<<endl;
    }
        
         
          
           void agregarCalificacion(double n){
             if(n>=0 && n<=100){
        nota.push_back(n);
        cout <<"Calificacion insertada "<<n<<endl;
             }else{
                 cout<<"Calificacion no valida " <<endl;
             }
 }
     
     double calcularPromedio(){
             double suma =0; 
             for(int i =0 ; i<nota.size() ;i++){
                 suma+=nota[i];
             }
            return suma/nota.size();
           
           }
 };
 
 int main (){
     Estudiante est1("Lucia","06070587965");
     Estudiante est2("Laura", "08040345786");
     
     est1.agregarCalificacion(10);
     cout<<"Promedio:"<<est1.calcularPromedio()<<endl;
       
       
       return 0; 
 }
