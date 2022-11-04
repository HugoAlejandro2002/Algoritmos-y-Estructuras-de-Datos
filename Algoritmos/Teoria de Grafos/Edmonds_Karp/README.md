<h1 align="center"> Edmonds Karp </h1>

El algoritmo de Edmonds-Karp es una implementación del método Ford-Fulkerson para calcular el flujo máximo en una red de flujo.

Este algoritmo es similar al algoritmo de Ford-Fulkerson excepto que se especifica el orden de búsqueda de las rutas de ascenso. La ruta encontrada debe ser la ruta más corta con ancho de banda disponible. Esto se puede encontrar con bfs ya que permitimos que los bordes sean una unidad de longitud. Otra propiedad de este algoritmo es que la longitud de la subida más corta aumenta monótonamente.


![image](https://user-images.githubusercontent.com/97768733/199864614-a0e7a7f0-fbd6-45a8-be7a-7c7e41e8f80f.png)


## Codigo

* [Edmonds Karp](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/Teoria%20de%20Grafos/Dinic/dinic.cpp)

## Problemas

## Referencias 

* [Dinic](https://es.wikipedia.org/wiki/Algoritmo_de_Dinic).  
* Github : Algoritmica 2. [Dinic](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Teoria%20de%20Grafos/Dinic).
* [Understanding Dinic’s Algorithm](https://medium.com/smucs/understanding-dinics-algorithm-ebf892e66227).
