<h1 align="center"> Rod Cutting </h1>

Dada una barra de longitud n y una tabla con los precios de todas las piezas menores que n, determine la ganancia máxima que se puede obtener cortando una barra y vendiendo sus piezas.
El problema del corte de barras es una versión unidimensional del cutting stock problem. Este es un problema NP-completo.

Una solución lenta a este problema es generar todas las configuraciones de diferentes piezas y encontrar la configuración de mayor precio. Pero esta solución es exponencial. Si analizamos, veremos que hay varios subproblemas que se resuelven una y otra vez, lo que implica que podemos usar DP.

![image](https://user-images.githubusercontent.com/97768733/197421621-367bf47a-4f29-499f-ae77-2a8b45b5464c.png)

## Codigo

* [UnionFind](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Estructuras%20de%20Datos/Union%20Find/unionFind.cpp).

## Problemas

* [Anasis Cobweb](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/tree/main/Estructuras%20de%20Datos/Union%20Find/Problems/Anasis%20Cobweb)
* [Union Find](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/tree/main/Estructuras%20de%20Datos/Union%20Find/Problems/Union%20Find)

## Referencias 
* Github : Algoritmica 2. [UnionFind](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Estructura_de_datos/Union_Find/unionFind.cpp).
* [Unión Find](https://es.m.wikipedia.org/wiki/Estructura_de_datos_para_conjuntos_disjuntos).
* [DJoinSet-UnionFind](https://jariasf.wordpress.com/2012/04/02/disjoint-set-union-find/).
