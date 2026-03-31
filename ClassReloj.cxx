#include<string>
#include<iostream>
using namespace std ;
 class Rectangulo {
     
         private :
       double base ;
       double  altura; 
       
       public :
       //Constructor 
       Rectangulo(double b, double h){
            base=b;
            altura=h;
            cout <<"Se ha creado el rectangulo de base "<<base<<"y altura "<<altura <<endl;
       }
      
        //Getter 
       double getBase(){ return base;}
       double getAltura(){return altura ;}
       
         //Setter 
        void setBase(double nuevaBase){
            if(nuevaBase>0){
                base=nuevaBase;
            }else{
                cout<<" Verifique el rango"<<endl;
            }
        }
            void setAltura(double nuevaAltura){
                if(nuevaAltura>0){
                    altura=nuevaAltura ;
                }else{
                    cout<<" Valor incorrecto , verifique el rango"<<endl;
                }
            }
 
   double Area(){return (base*altura);}
   double Perimetro(){ return (2*(base+altura));}
 };
             int main(){
            Rectangulo rect1( 4.7, 3.2);
            
            rect1.Area();
            rect1.Perimetro();
            
            cout<<"El rectangulo tiene "<<rect1.getBase ()<<"de base y"<<rect1.getAltura()<<"de altura"<<endl;
            
            rect1.setBase(-3);
            rect1.setAltura(0.0);
            
            return 0;
           }
                           

	
