<h1 align="center"> Kruskal </h1>

El algoritmo de Kruskal es un algoritmo basado en la teoría de gráficos para encontrar el árbol de expansión mínimo en un gráfico vinculado ponderado. Esto significa que busca un subconjunto de las aristas que, al crear un árbol, incluyen todos los vértices y donde el valor de la suma de todas las aristas del árbol es el más pequeño. Si el gráfico es disjunto, encuentre un bosque agregado mínimo (árbol agregado mínimo para cada componente conectado). Este algoritmo toma su nombre de Joseph Kruskal, quien lo publicó por primera vez en 1956.

Primero, ordene los bordes del gráfico por su peso de menor a mayor. Usando una técnica codiciosa, Kruskal intentará conectar cada borde hasta formar un bucle, lo que se hará con Union-Find. Como ya hemos ordenado las aristas por peso, comenzaremos con las aristas menos ponderadas, si los vértices que contienen la arista especificada no están en la misma composición, los unimos en un solo componente con Union(x,y) para verificar si están en la misma componente consistente usamos la función SameComponent(x,y) así evitamos la generación de ciclos y la arista que une dos vértices es siempre la más pequeña posible.

![image](https://user-images.githubusercontent.com/97768733/197424222-0b41b21a-0962-4444-8e5d-d16913e36590.png)


## Codigo

* [Kruskal](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/Teoria%20de%20Grafos/Kruskal/kruscal.cpp).

## Problemas


## Referencias 
* Github : Algoritmica 2. [Kruskal](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Teoria%20de%20Grafos/Kruskal).
* [Kruskal](https://es.wikipedia.org/wiki/Algoritmo_de_Kruskal).
* [Arbol de Expansion](https://jariasf.wordpress.com/2012/04/19/arbol-de-expansion-minima-algoritmo-de-kruskal/).
