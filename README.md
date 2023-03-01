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

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/KzfVg4dt/Screenshot-from-2023-03-01-23-21-46.png' border='0' alt='Screenshot-from-2023-03-01-23-21-46'/></a></p>

Uno de los propósitos mas importantes de este archivo es la encapsulación del código para conseguir una practica mucho mas limpia y orgaizada. En la resolución de ejercicios vamos a comentar únicamente las funciones mas complejas, dejando la opción al lector de ver el código en su totalidad [aquí](https://github.com/clases-julio/p1-introcpp-cnebril2020/blob/main/basic_operations.cpp).

Para la correcta ejecución de los ejercicios en los que se incluya esta libreria, habría que incluirlos en la compilación del ejercicio correpondiente. Un posible ejemplo con el ejercicio 1 sería el siguiente: ```g++ -o ejercicio1 ejercicio1.cpp basic_operations.cpp```

## Resolución de ejercicios.

Vamos a proceder a explicar los aspectos mas fundamentales de cada ejercicio, incluyendo capturas con el código principal de cada uno de ellos. Explicaré primero la función del código y, posteriormente, adjuntaré la imagen conveniente en cada ejercicio.

### Ejercicio 1

Lo primero de todo es incluir las cabeceras: ```<iostream>``` el cual controla la lectura y escritura en los flujos estándar de C++ y ```basic_operations.h``` el cual incluye las funciones ```add(), mul(), sub(), divn()```. El programa solicita dos variables al usuario de tipo ```ìnt``` para la posterior manipulación de estas.

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/hPDmrvNf/Screenshot-from-2023-03-01-23-32-32.png' border='0' alt='Screenshot-from-2023-03-01-23-32-32'/></a></p>

Comentar que las funciones son de tipo ```void```, es decir, que no devuelven ningún tipo de dato y, en este caso, muestran el resultado de la operación con un mensaje por la salida estándar: ```cout```.

### Ejercicio 2

El apartado a) fue realmente sencillo, usando una única intruccion con un operador de inserción de flujo (<<).

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/qRqcjRNs/Screenshot-from-2023-03-01-19-53-47.png' border='0' alt='Screenshot-from-2023-03-01-19-53-47'/></a></p>

El apartado b) tampoco supuso mucho esfuerzo, simplemente separamos los números para cumplir el requisito de usar 4 inserciones de flujo.

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7P79c5B9/Screenshot-from-2023-03-01-19-54-51.png' border='0' alt='Screenshot-from-2023-03-01-19-54-51'/></a></p>

Por ultimo, el apartado c), se necesitan cuatro instrucciones diferentes en las cuales he desplegado cuatro arrays de tipo char formadas tal que así: ```{1, ' ', \0}```, excepto el ```'cuatro'``` que tiene el caracter especial ```'\n'``` al final. 

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bw69bkJy/Screenshot-from-2023-03-01-20-03-49.png' border='0' alt='Screenshot-from-2023-03-01-20-03-49'/></a></p>

### Ejercicio 3

Inluimos la funcion ```compare()``` de nuestra libreria ```.h``` de confianza y comparamos dos numeros pedidos al usuario.

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Hx0J012w/Screenshot-from-2023-03-01-20-07-38.png' border='0' alt='Screenshot-from-2023-03-01-20-07-38'/></a></p>

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/593Y61j1/Screenshot-from-2023-03-01-20-10-01.png' border='0' alt='Screenshot-from-2023-03-01-20-10-01'/></a></p>

### Ejercicio 4

Pedimos tres numeros distintos al usuarios, los almacenamos en variables distintas y operamos con ellos. Para saber si un número es el mas grande de los tres, pongamos que tenemos "x", "y" y "z": 
1. Si "x" es mayor que "y" y "z" significa que "x" es el número mas grande del conjunto.
2. Si "y" es mayor que "x" y "z" significa que "y" es el número mas grande del conjunto.
3. Si no es ninguno de los dos casos anteriores significa que "z" es el número mas grande del conjunto.

Para saber si un número es el mas pequeño de un conjunto se sigue exactamente la misma mecánica.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/fL5zTzCr/Screenshot-from-2023-03-01-20-14-10.png" alt="Screenshot-from-2023-03-01-20-14-10"/></a><br/><br/></p>
<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/rsm8DBYF/Screenshot-from-2023-03-01-20-14-35.png" alt="Screenshot-from-2023-03-01-20-14-35"/></a><br/><br/></p>

### Ejercicio 5

En este ejercicio no es necesario el uso de funciones ya que sus operaciones son muy simples. Definimos "pi" como ```float``` para intentar tener má
s precisión en los cálculos y con el valor introducido por el usuario ("r") se llevan a cabo las fórmulas pertinentes.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/h4yDkGfJ/Screenshot-from-2023-03-01-20-40-20.png" alt="Screenshot-from-2023-03-01-20-40-20"/></a><br/><br/></p>

### Ejercicio 6

Aunque no se especifique como tal, este ejercicio lo conforman dos aparatados diferentes. El primero de ellos consiste en usar ocho intrucciones de salida y el segundo se pretende usar el menor número de estas posibles.

Para el primer apartado definimos dos strings diferentes, de la libreria estándar ```<string>``` de C++, que forman el tablero de ajedrez y las mostramos por la salida estándar alternando estas mismas.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/hPXDcqd2/Screenshot-from-2023-03-01-20-40-44.png" alt="Screenshot-from-2023-03-01-20-40-44"/></a><br/><br/></p>

Para optimizar este ejercicio y cumplir con la condición impuesta en el segundo apartado, se propone usar una única string que almacene todo el tablero para su posterior impresión por la salida estándar.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/RhDvKgj1/Screenshot-from-2023-03-01-20-40-59.png" alt="Screenshot-from-2023-03-01-20-40-59"/></a><br/><br/></p>

### Ejercicio 7

El ejercicio 7 hace uso del operador "%" que consiste en obtener el resto de la división entera entre dos numeros. Por ejemplo en la operación "5 / 3" el resto sería "2" por lo que se podría decir que el módulo de "5" entre "3" es "2". Siguiendo este concepto tan simple es como vamos a solucionar este ejercicio en el que se propone diseccionar un número por dígitos. 

Para obtener el primer dígito del numero 31250 (por ejemplo) es fácil, simplemente hacemos la división entera entre 10000 y lo obtienes: 31250 / 10000 = 3. Para el segundo dígito aplicamos la fórmula: 31250 / 1000 = 31, y aplicando el modulo al 31 de 10 obtenemos el "1". Para el resto de digitos se aplica el mismo procedimiento.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/tgjp3Zmc/Screenshot-from-2023-03-01-21-46-53.png" alt="Screenshot-from-2023-03-01-21-46-53"/></a><br/><br/></p>

Una vez almacenados los dígitos en distintas varibales, las separamos entre sí por tres espacios.

### Ejercicio 8

Se recibe un número y se aplica el factorial a este. ¿En qué consiste el factorial? Lo he implementado con una varibale "i" que sirve como iteradora del bucle "while". Se recibe el numero "n1", el previamente facilitado por el usuario, se crea la variable "i" (un número menor a "n1") con la que vamos a empezar a multiplicar por "n1" y por último le restamos "1" a "i". Pongamos un ejemplo para ilustrarlo mejor:
1. El usuario introduce un 4 → "n1 = 4"
2. "i = 3"
3. Mientras "i" sea mayor que "1" se continua en el bucle
4. "n1 = n1 * i = 4 * 3 = 12", es decir, "n1 = 12"
5. Le restamos "1" a "i". "i = 2"
6. Se repite el bucle en el que, al final, "n1 = 12 * 2 = 24"
7. Siendo "i = 1" esta vez, no se entra al bucle y obtenemos 4! = 24

La funcion ```factorial()``` devuelve un ```unsigned long long``` ya que queremos cuantos más digitos posibles mejor ya que, el rango de este tipo de dato es de 0 a 18.446.744.073.709.551.615. Se asigna la varible "n1" también a este tipo de dato por las operaciones concurrentes que relizará la función internamente.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/KvCZYs7x/Screenshot-from-2023-03-01-21-57-58.png" alt="Screenshot-from-2023-03-01-21-57-58"/></a><br/><br/></p>

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/JzJRHcKJ/Screenshot-from-2023-03-01-21-59-03.png" alt="Screenshot-from-2023-03-01-21-59-03"/></a><br/><br/></p>


En el siguiente apartado se sigue el mismo concepto pero usamos números tipo ```double``` para hacer mas preciso nuestro cálculo. Mas adelante hacemos uso de la función ```setprecision()```, usando la librería ```<iomanip>```, para mostrar mas decimales en la operación (hasta 20).

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/bv983y7w/Screenshot-from-2023-03-01-22-22-25.png" alt="Screenshot-from-2023-03-01-22-22-25"/></a><br/><br/></p>

En este apartado es hacer exactamente lo mismo que en el anterior, pero añadir el valor de "x" introducido por el usuario elevado al iterador "i". Para añadir esta funcionalidad hacemo uso de la libreria ```<cmath>```. Lo último que hay que hacer es controlar cuando el usuario introduce el valor "0" en la "x" para que "e^0 = 1".

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/SsQ45047/Screenshot-from-2023-03-01-22-42-38.png" alt="Screenshot-from-2023-03-01-22-42-38"/></a><br/><br/></p>

### Ejercicio 9

Establecemos un bucle "for" en el que se suma o se resta el valor de la variable "pi" (inicializada a 4) según un operador que oscila entre 0 y 1 en cada iteración. Otra función importante es ```odd_numbers()``` en el que se le introduce un número "X" y te devuelve el número impar correspondiente en esa posición "X". Por ejemplo si usáramos la función: odd_numbers(3) = 5. Usamos variables tipo ```double``` con el mismo objetivo que el primer apartado, precisión.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/pr4tppFq/Screenshot-from-2023-03-01-22-44-09.png" alt="Screenshot-from-2023-03-01-22-44-09"/></a><br/><br/></p>

<p align="center"><a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/PJPjXmPC/Screenshot-from-2023-03-01-22-44-56.png' border='0' alt='Screenshot-from-2023-03-01-22-44-56'/></a></p>

### Ejercicio 10

Definimos dos bucles "for" uno para la piramide "creciente" y otro para la "decreciente". Haciendo uso del módulo ```string``` insertamos una cantidad de espacios que se van reduciendo en cada iteración , ya que la el iterador "i" va creciendo. Por otra parte a medida que los espacios decrecen, los asteriscos aumentan de forma lineal: 1, 3, 5, 7 y 9 (se para en 9 ya que "i = 4" y sale del bucle "for"). 

En la pirámide descendente queremos empezar por 7 asteriscos, por lo que tendremos que definir "i = 3" (no como en el anterior caso que estaba definida a 4) y saldrá del bucle cuando "i" sea mayor o igual que 0, decreciendo en cada iteración. Al empezar por "i = 3" el número de espacios y asteriscos se intercambian respecto a la anterior piramide, formando este rombo tan bonito.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/XJ2W627M/Screenshot-from-2023-03-01-23-12-06.png" alt="Screenshot-from-2023-03-01-23-12-06"/></a><br/><br/></p>

En el segundo apartado se comprueba si el número especificado por el usuario es impar y esta en rango con las funciones ```isOdd(), isInRange()``` respectivamente. Si cumple estas condiciones se implementa la misma solución que el apartado anterior con la peculiaridad que, en vez de usar "i" con un valor arbitrario, se sustituye por el valor introducido por el usuario.

<p align="center"><a href="https://postimages.org/" target="_blank"><img src="https://i.postimg.cc/ZYMmfDMp/Screenshot-from-2023-03-01-23-19-09.png" alt="Screenshot-from-2023-03-01-23-19-09"/></a><br/><br/></p>







