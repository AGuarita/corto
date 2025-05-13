#include <iostream>

using namespace std;

int main(){
    int edad,saldo,talla,genero,compra,saldoRestante;
    cout << "Bienvenido, podria decirme su edad para encontrar de mejor manera una talla de zapatos"<< endl;
    cin >>edad;
    saldo=200;
    int z1,z2,z3,z4,z5,pD1,pD2,pD3,pD4,pD5,pD6;
    z1=80;
    z2=120;
    z3=250;
    z4=70;
    z5=100;
    
    if (edad>=0 and edad <=12){
        talla=34;
        cout<< "Su talla recomendada es "<< talla<<endl;
    } else if (edad>=13 and edad <=17){
          talla=38;  
          cout<< "Su talla recomendada es "<< talla<<endl;
          } else if (edad>=18 and edad <=64){
            talla =40;
            cout<< "Su talla recomendada es "<< talla<<endl;
            } else if (edad>=65){
              talla =42;
              cout<< "Su talla recomendada es "<< talla<<endl;
               }
    cout << "Por favor decirnos su genero para saber su preferencia en estilos de zapatos"<< endl;
    cout << "1.Hombre"<< endl;
    cout << "2.Mujer"<< endl;
    cout << "3.Mostrar todo"<< endl;
    cin >> genero;

    switch (genero)
    {
    case 1:

        cout << "Zapatos para hombres:" <<endl;
        pD1=z1-(z1*0.2);
        pD2=z2-(z2*0.2);
        pD3=z3-(z3*0.2);

        cout << "1.Zapato Deportivo "<< z1 << "(descuento de 20%), precio con descuento "<< pD1<< endl;
        cout << "2.Zapato Formal "<< z2 << "(descuento de 20%), precio con descuento "<< pD2<< endl;
        cout << "3.Zapato Premium "<< z3 << "(descuento de 20%), precio con descuento "<< pD3<< endl;
        cout << "Seleccione una opcion:"<< endl;
        cin >> compra;
            switch (compra)
            {
            case 1:
                cout <<"Ha seleccionado Zapato Deportivo, con un precio final de "<< pD1<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD1;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 2:
                cout <<"Ha seleccionado Zapato Formal, con un precio final de "<< pD2<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD2;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 3:
                cout <<"Ha seleccionado Zapato Premium, con un precio final de "<< pD3<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD3;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            default:
                cout <<"Valor no valido"<<endl;
                break;
            }
        break;
    case 2:

    cout << "Zapatos para mujeres:" <<endl;
        pD1=z4-(z4*0.15);
        pD2=z5-(z5*0.15);
        pD3=z3-(z3*0.15);

        cout << "1.Zapato Casual "<< z4 << "(descuento de 20%), precio con descuento "<< pD1<< endl;
        cout << "2.Zapato Elegante "<< z5 << "(descuento de 20%), precio con descuento "<< pD2<< endl;
        cout << "3.Zapato Premium "<< z3 << "(descuento de 20%), precio con descuento "<< pD3<< endl;
        cout << "Seleccione una opcion:"<< endl;
        cin >> compra;
        switch (compra)
            {
            case 1:
                cout <<"Ha seleccionado Zapato Casual, con un precio final de "<< pD1<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD1;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 2:
                cout <<"Ha seleccionado Zapato Elegante, con un precio final de "<< pD2<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD2;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 3:
                cout <<"Ha seleccionado Zapato Premium, con un precio final de "<< pD3<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD3;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            default:
                cout <<"Valor no valido"<<endl;
                break;
            }
        break;
    case 3:

        cout << "Zapatos para hombres:" <<endl;
        pD1=z1-(z1*0.2);
        pD2=z2-(z2*0.2);
        pD3=z3-(z3*0.2);

        cout << "1.Zapato Deportivo "<< z1 << "(descuento de 20%), precio con descuento "<< pD1<< endl;
        cout << "2.Zapato Formal "<< z2 << "(descuento de 20%), precio con descuento "<< pD2<< endl;
        cout << "3.Zapato Premium "<< z3 << "(descuento de 20%), precio con descuento "<< pD3<< endl;
        cout << "Seleccione una opcion:"<< endl;
        cin >> compra;
            switch (compra)
            {
            case 1:
                cout <<"Ha seleccionado Zapato Deportivo, con un precio final de "<< pD1<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD1;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 2:
                cout <<"Ha seleccionado Zapato Formal, con un precio final de "<< pD2<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD2;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            case 3:
                cout <<"Ha seleccionado Zapato Premium, con un precio final de "<< pD3<< endl;
                cout <<"Compra realizada con exito" << endl;
                saldoRestante=saldo-pD3;
                cout <<"Su saldo restante es de "<< saldoRestante<< endl;
                cout <<"Gracias por su compra"<<endl;
                break;
            default:
                cout <<"Valor no valido"<<endl;
                break;
            }
        break;
    default:
    cout <<"Valor no valido"<<endl;
        break;
    
    } 
    }