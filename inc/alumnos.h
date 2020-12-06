/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/*!
 *  @struct alumno_s
 *  @brief Almacena los datos de cada alumno
 *  @param apellido: Apellido del alumno
 *  @param nombres: Nombres del alumno
 *  @param documento: Numero de documento del alumno
 *
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/*!
 *  @fn bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno)
 *  @brief: Imprime los datos de un alumno en particular.
 *  @param [in] cadena: Puntero al inicio de la cadena a serializar con los datos del alumno
 *  @param [in] espacio: Longitud de la cadena.
 *  @param [in] alumno: Alumno a serializar (del tipo alumno_t).
 *  @return resultado: Resultado de la operacion, "False" si no se pudo realizar.
 *
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/*!
 *  @fn bool SerializarAlumnos(char * cadena, size_t espacio)
 *  @brief: Imprime los datos de todos los alumnos cargados en una unica cadena, con formato JSON.
 *  @param [in] cadena: Puntero al inicio de la cadena a serializar con los datos de los alumnos
 *  @param [in] espacio: Longitud de la cadena a serializar.
 *  @return resultado: Resultado de la operacion, "False" si no se pudo realizar.
 *
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
