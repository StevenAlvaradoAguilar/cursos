/**********************************************************************
    Instituto Tecnológico de Costa Rica
    Estructuras de Datos IC-2001
    II Semestre 2019
    Profesora: Samanta Ramijan Carmiol

    Ejemplos Prácticos: Lista de Estudiantes
    Estudiante:
**********************************************************************/
//Definición de Macros
#define LONGITUD_MAXIMA_NOMBRE 50 
#define LONGITUD_MAXIMA_CARNET 12

//Definición de Estructuras
typedef struct nodo_estudiante
{
	int carnet;
	char *nombre;

	struct nodo_estudiante *ref_siguiente;
}nodo_estudiante;

typedef struct lista_estudiantes
{
	nodo_estudiante *ref_inicio;
	int cantidad;
}lista_estudiantes;

//Definición de Funciones
/*-----------------------------------------------------------------------
	crear_nodo
	Entradas: No recibe parámetros
	Salidas: Retorna un puntero de tipo nodo_estudiante al nodo creado
	Funcionamiento: 
		- Solicita al usuario ingresar Nombre y Carnet.
		- Crea un puntero de tipo nodo_estudiante
		- Le asigna al nodo el nombre y carnet ingresados.
		- El nodo apunta a NULL.
		- retorna el puntero al nuevo nodo.
-----------------------------------------------------------------------*/
nodo_estudiante* crear_nodo();
/*-----------------------------------------------------------------------
	inicializar_lista
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void inicializar_lista();
/*-----------------------------------------------------------------------
	insertar_inicio
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void insertar_inicio(nodo_estudiante* nuevo);
/*-----------------------------------------------------------------------
	insertar_final
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void insertar_final(nodo_estudiante* nuevo);
/*-----------------------------------------------------------------------
	borrar_por_indice
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void borrar_por_indice(int indice);
 /*-----------------------------------------------------------------------
	buscar_por_indice
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
nodo_estudiante* buscar_por_indice(int indice);

 /*-----------------------------------------------------------------------
	validar_carnets
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void validar_carnets(int carnet_almacenado, int carnet_ingresado);
 /*-----------------------------------------------------------------------
	menu
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
void menu();
 /*-----------------------------------------------------------------------
	main
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
int main();
 /*-----------------------------------------------------------------------
	get_user_input
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
char* get_user_input(size_t max_size);
 /*-----------------------------------------------------------------------
	get_user_numerical_input
	Entradas: 
	Salidas: 
	Funcionamiento: 
-----------------------------------------------------------------------*/
int get_user_numerical_input(size_t max_size);
