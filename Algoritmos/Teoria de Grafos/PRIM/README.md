<h1 align="center"> PRIM </h1>

El algoritmo de Prim es un algoritmo basado en la teoría de grafo para encontrar un árbol de expansión mínimo en un grafo no dirigido vinculado con bordes etiquetados.
En otras palabras, el algoritmo encuentra un subconjunto de las aristas que forman el árbol con todos sus vértices, con la suma ponderada de todas las aristas del árbol lo más baja posible. Si el gráfico es discreto, el algoritmo encontrará el árbol de expansión mínimo para uno de los componentes combinados que forman el gráfico desconectado.

Comienza con un árbol de expansión vacío. La idea es mantener dos conjuntos de vértices. El primer conjunto contiene vértices que ya están en el MST, el segundo conjunto contiene vértices que no se han incluido. En cada paso, considera todos los bordes que unen los dos conjuntos y elige el borde menos ponderado de esos bordes. Con el contorno seleccionado, mueva el otro extremo del contorno al conjunto que contiene el MST.

![image](https://user-images.githubusercontent.com/97768733/197424489-78967029-2831-4b0e-9cd0-ab952a7e6918.png)


## Codigo

* [PRIM](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Estructuras%20de%20Datos/Union%20Find/unionFind.cpp).

## Problemas


## Referencias 

* [PRIM]((https://en.wikipedia.org/wiki/Prim%27s_algorithm).
* [PRIM Greedy](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/).
