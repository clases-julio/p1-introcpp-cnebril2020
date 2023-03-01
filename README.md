# Introducción a la práctica 1

**Fecha límite**: 01/03/2023.  

**Autor**: Nebril Jiménez, Carlos. 

**Asignatura**: Ampliación de Sistemas Telemáticos (AST).

**Profesor de prácticas**: Julio Veva (julio.vega@urjc.es)

**Objetivo**: resolución de la práctica 1 usando C++.

Resumen: esta práctica esta constituida por diez ejercicios diferentes y, algunos de ellos, con subapartados. La práctica consiste en quince archivos ```.cpp``` y, en algunos, está incluido un fichero ```.h``` necesario para la ejecución del código. Este archivo se llama ```basic_operations.h``` y se encuentran todas las cabeceras de las funciones necesarias para la práctica, ya que el código en su plenitud se encuentra en [```basic_operations.cpp```](https://github.com/clases-julio/p1-introcpp-cnebril2020/blob/main/basic_operations.cpp).

Particularidades: en el ejercicio 8, el apartado c), se pide al usuario que especifique el número de términos deseados en la serie. En mi solución he considerado que faltaba precisar el valor de "x" (de la expresión "e^x"), principalmente, para saber a que valor aproximar con el número de términos introducido por el usuario.

## Archivo _basic_operations.h_

Para comprender y analizar mejor esta práctica vamos a ver en que consiste este archivo ```.h``` y por qué es necesario en este tipo de ejercicios. Este fichero se trata de una libreria, es decir, de un archivo el cuál podemos importar a nuestro código para adquirir ciertas funcionalidades extras. Uno de los propósitos mas importantes del uso de estas librerias es la encapsulación del código para conseguir una practica mucho mas limpia y orgaizada. En la resolución de ejercicios vamos a comentar únicamente las funciones mas complejas, dejando la opción al lector de ver el código en su totalidad [aquí](https://github.com/clases-julio/p1-introcpp-cnebril2020/blob/main/basic_operations.cpp).

Para la correcta ejecución de los ejercicios en los que se incluya esta libreria, habría que incluirlos en la compilación del ejercicio correpondiente. Un posible ejemplo con el ejercicio 1 sería el siguiente: ```g++ -o ejercicio1 ejercicio1.cpp basic_operations.cpp```

## Resolución de ejercicios.

Vamos a proceder a explicar los aspectos mas fundamentales de cada ejercicio, incluyendo capturas con el código principal de cada uno de ellos. 

### Ejercicio 1

Lo primero de todo es incluir las cabeceras: ```<iostream>``` el cual controla la lectura y escritura en los flujos estándar de C++ y ```basic_operations.h``` el cual incluye las funciones ```add(), mul(), sub(), divn()```. El programa solicita dos variables al usuario de tipo ```ìnt``` para la posterior manipulación de estas.

<img>

Comentar que las funciones son de tipo ```void```, es decir, que no devuelven ningún tipo de dato y, en este caso, muestran el resultado de la operación con un mensaje por la salida estándar: ```cout```.


