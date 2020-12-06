/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/

/*!
 * @fn int main(int argc, char *argv[])
 * @brief Funcion principal del programa
 * @param  argc     Cantidad de elementos recibidos como argumentos al invocar el programa.
 * @param  argv     Arreglo de punteros a cada uno de los argumentos recibidos.
 * @return          Si el programa no puede terminar correctamente, retorna distinto de 0.
 *
 */
int main(int argc, char *argv[]) {
    char cadena[2048];

    if (SerializarAlumnos(cadena, sizeof(cadena))) {
        printf("Listado total de alumnos: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar un alumno\r\n");
    }
    return 0;
}
