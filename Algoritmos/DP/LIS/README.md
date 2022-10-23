<h1 align="center"> Longests Increasing Subsequence </h1>

Dada una barra de longitud n y una tabla con los precios de todas las piezas menores que n, determine la ganancia máxima que se puede obtener cortando una barra y vendiendo sus piezas.
El problema del corte de barras es una versión unidimensional del cutting stock problem. Este es un problema NP-completo.

Una solución lenta a este problema es generar todas las configuraciones de diferentes piezas y encontrar la configuración de mayor precio. Pero esta solución es exponencial. Si analizamos, veremos que hay varios subproblemas que se resuelven una y otra vez, lo que implica que podemos usar DP.

![image](https://user-images.githubusercontent.com/97768733/197421637-a0c18b5e-41f4-48b4-a415-eb0de8270f15.png)

## Codigo

* [Rod Cutting](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/DP/Rod_Cutting/rod_cutting.cpp).

## Problemas


## Referencias 
* Github : Algoritmica 2. [Rod Cutting](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Programacion%20Dinamica/rod_cutting/rod_cutting.cpp).
* [Cutting Stock](https://en.wikipedia.org/wiki/Cutting_stock_problem#Illustration_of_one-dimensional_cutting-stock_problem).
* [Rod Cutting DP](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/).

