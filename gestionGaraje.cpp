#include <iostream>
#include <conio.h>
#include <vector>
#include <string.h>

using namespace std;

int main(){
	int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\n\t1. Agregar vehiculo" << endl;
        cout << "\t2. Retirar vehiculo" << endl;
        cout << "\t3. Estado del parqueo" << endl;
        cout << "\t4. Configuracion" << endl;
        cout << "\t5. Agregar datos del cliente" << endl;
        cout << "\t6. Salir" << endl;
        
        cout << "\n\tDigite la opcion: ";
        cin >> opcion;
        
        int numVehiculo;
        vector<int> vehiculos;
		string nombres[10];
        string ced[10];
        string email[10];
        switch (opcion) {
            case 1:
                // Instrucciones para agregar vehiculo
                cout << "\n\tIngrese el numero de vehiculo: ";
                cin >> numVehiculo;
                vehiculos.insert(vehiculos.begin(), numVehiculo);
                for (size_t i = 0; i < vehiculos.size(); i++) {
					 cout << vehiculos[i] << endl;
                }
                
                system("pause>nul");
                break;
                
            case 2:
                cout << "\n\n\t\t\tOpciones de retiro" << endl;
                cout << "\n\t2.1. Con factura" << endl;
                cout << "\t2.2. Sin factura" << endl;

                
                system("pause>nul");
                break;
                
            case 3:
                cout << "\n\tEspacios disponibles ";
                //cout << vehiculos;
        
                system("pause>nul");
                break;
                
            case 4:
                cout << "\n\n\t\t\tConfiguracion" << endl;
                cout << "\n\t4.1. Cantidad de espacios del parqueo" << endl;
                cout << "\t4.2. Precio por hora" << endl;
                cout << "\t4.3. Hora de apertura" << endl;
                cout << "\t4.4. Hora de cierre" << endl;

                
                system("pause>nul"); 
                break;
            case 5:
                // Agregar datos del cliente
                cout << "Por favor ingrese la siguiente informacion: \n";
                cout << "Nombre: ";
                cin >> nombres[10];
                cout << "Cedula: ";
                cin >> ced[10];
                cout << "Email: ";
                cin >> email[10];
                
                system("pause>nul");
                break;
            case 6:
            	repetir = false;
            	break;
        }        
    } while (repetir);
    return 0;
}



