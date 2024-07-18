//Estudiante: Cifuentes González Elian
//Fecha de entrega: 17/07/2024
//Curso: 1ro de TI



#include<iostream>

using namespace std;

/*¿Qué es un tipo de dato estructurado?
Es un tipo de dato que permite agrupar varios elementos de datos, que pueden ser de diferentes tipos, en una sola unidad. 
Estos tipos se utilizan para modelar objetos y estructuras más complejas en un programa.*/

//Definición de una estructura Libro
struct Libro {
    string codigo;  // Código único del libro
    string titulo;  // Título del libro
    string autor;   // Autor del libro
    int precio;     // Precio del libro
};

//Función que asigna valores a los libros en el arreglo
void AsignarLibros(Libro libros[], int total) {
    libros[0].codigo = "001";
    libros[0].titulo = "Un grito desesperado";
    libros[0].autor = "Carlos Cuauhtemoc Sánchez";
    libros[0].precio = 10;

    libros[1].codigo = "002";
    libros[1].titulo = "Las cruces sobre el agua";
    libros[1].autor = "Joaquin Gallegos Lara";
    libros[1].precio = 12;

    libros[2].codigo = "003";
    libros[2].titulo = "El Guaraguao";
    libros[2].autor = "Joaquin Gallegos Lara";
    libros[2].precio = 8;

    libros[3].codigo = "004";
    libros[3].titulo = "A la costa";
    libros[3].autor = "Luis A. Martínez";
    libros[3].precio = 11;

    libros[4].codigo = "005";
    libros[4].titulo = "1984";
    libros[4].autor = "George Orwell";
    libros[4].precio = 22;

    libros[5].codigo = "006";
    libros[5].titulo = "Orgullo y Prejuicio";
    libros[5].autor = "Jane Austen";
    libros[5].precio = 25;

    libros[6].codigo = "007";
    libros[6].titulo = "El Gran Gatsby";
    libros[6].autor = "Francis Scott Fitzgerald";
    libros[6].precio = 24;
}

//Función que imprime los detalles de cada libro
void ImprimirLibros(Libro libros[], int total) {
    for(int k = 0; k < total; k++) {
        cout << endl << "Titulo: " << libros[k].titulo << endl;
        cout << "Codigo: " << libros[k].codigo << endl;
        cout << "Autor: " << libros[k].autor << endl;
        cout << "Precio: " << libros[k].precio << endl;
    }
}

//Función que ordena los libros por título
void OrdenarPorTitulo(Libro libros[], int total) {
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - i - 1; j++) {
            if(libros[j].titulo > libros[j + 1].titulo) {
                Libro aux = libros[j];
                libros[j] = libros[j + 1];
                libros[j + 1] = aux;
            }
        }
    }
}

//Función que ordena los libros por precio de mayor a menor
void OrdenarPorPrecio(Libro libros[], int total) {
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - i - 1; j++) {
            if(libros[j].precio < libros[j + 1].precio) {  
                Libro aux = libros[j];
                libros[j] = libros[j + 1];
                libros[j + 1] = aux;
            }
        }
    }
}

//Función que permite ingresar los libros por teclado
void LeerLibro(Libro libros[], int total) {
    for (int i = 0; i < total; i++) {
        cout << "Ingrese los datos del libro " << i + 1 << ":" << endl;
        cout << "Codigo: ";
        cin >> libros[i].codigo;
        cout << "Titulo: ";
        cin.ignore(); 
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Precio: ";
        cin >> libros[i].precio;
    }
}

//Función principal (main)
int main() {
    const int MAX = 7;  
    Libro libros[MAX];  
    cout << endl << "Libros sin Ordenar" << endl;
    AsignarLibros(libros, MAX);
    ImprimirLibros(libros, MAX);

    cout << endl << "Tipo estructurado" << endl;
    cout << endl << "Libros Ordenados por Precio" << endl;

    OrdenarPorPrecio(libros, MAX);
    ImprimirLibros(libros, MAX);

    cout << endl << "Tipo estructurado" << endl;
    cout << endl << "Libros Ordenados por Titulo" << endl;

    OrdenarPorTitulo(libros, MAX);
    ImprimirLibros(libros, MAX);

    cout << endl << "Ingresar Libros" << endl;

    AsignarLibros(libros, MAX);
    LeerLibro(libros, MAX);
    ImprimirLibros(libros, MAX);

    return 0;
}
