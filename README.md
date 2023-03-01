# Introducción a la práctica 1

**Fecha límite**: 01/03/2023.  

**Autor**: Nebril Jiménez, Carlos. 

**Asignatura**: Ampliación de Sistemas Telemáticos (AST).

**Profesor de prácticas**: Julio Veva (julio.vega@urjc.es)

**Objetivo**: resolución de la práctica 1 usando C++.

**Resumen**: esta práctica esta constituida por diez ejercicios diferentes y, algunos de ellos, con subapartados. La práctica consiste en quince archivos ```.cpp``` y, en algunos, está incluido un fichero ```.h``` necesario para la ejecución del código. Este archivo se llama ```basic_operations.h``` y se encuentran únicamente las cabeceras de las funciones necesarias para la práctica, ya que el código en su plenitud se encuentra en [```basic_operations.cpp```](https://github.com/clases-julio/p1-introcpp-cnebril2020/blob/main/basic_operations.cpp).

**Particularidades**: en el ejercicio 8, apartado c), se pide al usuario que especifique el número de términos deseados en la serie. En mi solución he considerado que faltaba precisar el valor de "x" (de la expresión "e^x"), principalmente, para saber a que valor aproximar con el número de términos introducido por el usuario.

## Archivo _basic_operations.h_

Para comprender y analizar mejor esta práctica vamos a ver en que consiste este archivo ```.h``` y por qué es necesario en este tipo de ejercicios. Este fichero se trata de una libreria, es decir, de un archivo el cuál podemos importar a nuestro código para adquirir ciertas funcionalidades extras. Existen librerias estándar de C++ aunque, en este caso, trabajaremos con una libreria de implementación propia.

Uno de los propósitos mas importantes de este archivo es la encapsulación del código para conseguir una practica mucho mas limpia y orgaizada. En la resolución de ejercicios vamos a comentar únicamente las funciones mas complejas, dejando la opción al lector de ver el código en su totalidad [aquí](https://github.com/clases-julio/p1-introcpp-cnebril2020/blob/main/basic_operations.cpp).

Para la correcta ejecución de los ejercicios en los que se incluya esta libreria, habría que incluirlos en la compilación del ejercicio correpondiente. Un posible ejemplo con el ejercicio 1 sería el siguiente: ```g++ -o ejercicio1 ejercicio1.cpp basic_operations.cpp```

## Resolución de ejercicios.

Vamos a proceder a explicar los aspectos mas fundamentales de cada ejercicio, incluyendo capturas con el código principal de cada uno de ellos. 

### Ejercicio 1

Lo primero de todo es incluir las cabeceras: ```<iostream>``` el cual controla la lectura y escritura en los flujos estándar de C++ y ```basic_operations.h``` el cual incluye las funciones ```add(), mul(), sub(), divn()```. El programa solicita dos variables al usuario de tipo ```ìnt``` para la posterior manipulación de estas.

<img>

Comentar que las funciones son de tipo ```void```, es decir, que no devuelven ningún tipo de dato y, en este caso, muestran el resultado de la operación con un mensaje por la salida estándar: ```cout```.

### Ejercicio 2

El apartado a) fue realmente sencillo, usando una única intruccion con un operador de inserción de flujo (<<).

<img>

El apartado b) tampoco supuso mucho esfuerzo, simplemente separamos los números para cumplir el requisito de usar 4 inserciones de flujo.

<img>

Por ultimo, el apartado c), se necesitan cuatro instrucciones diferentes en las cuales he desplegado cuatro arrays de tipo char formadas tal que así: ```{1, ' ', \0}```, excepto el ```'cuatro'``` que tiene el caracter especial ```'\n'``` al final. 

<img>

### Ejercicio 3

Inluimos la funcion ```compare()``` de nuestra libreria ```.h``` de confianza y comparamos dos numeros pedidos al usuario.

<img><img>

### Ejercicio 4

Pedimos tres numeros distintos al usuarios, los almacenamos en variables distintas y operamos con ellos. Para saber si un número es el mas grande de los tres, pongamos que tenemos "x", "y" y "z": 
1. Si "x" es mayor que "y" y "z" significa que "x" es el número mas grande del conjunto.
2. Si "y" es mayor que "x" y "z" significa que "y" es el número mas grande del conjunto.
3. Si no es ninguno de los dos casos anteriores significa que "z" es el número mas grande del conjunto.

Para saber si un número es el mas pequeño de un conjunto se sigue exactamente la misma mecánica.

<img> <img>

### Ejercicio 5

En este ejercicio no es necesario el uso de funciones ya que sus operaciones son muy simples. Definimos "pi" como ```float``` para intentar tener má
s precisión en los cálculos y con el valor introducido por el usuario ("r") se llevan a cabo las fórmulas pertinentes.

<img>

### Ejercicio 6

Aunque no se especifique como tal, este ejercicio lo conforman dos aparatados diferentes. El primero de ellos consiste en usar ocho intrucciones de salida y el segundo se pretende usar el menor número de estas posibles.


