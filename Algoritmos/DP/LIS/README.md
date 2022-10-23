<h1 align="center"> Longests Increasing Subsequence </h1>

El problema de la subsecuencia ascendente más larga (LIS) es encontrar la longitud de la subsecuencia más larga de una cadena dada de tal manera que todos los elementos de la subsecuencia se clasifiquen en orden ascendente. Por ejemplo, la longitud del LIS para {10, 22, 9, 33, 21, 50, 41, 60, 80} es 6 y el LIS es {10, 22, 33, 50, 60, 80}.

Para encontrar el LIS para un arreglo dado, necesitamos devolver max(L(i)), donde 0 < i < n. Formalmente, la longitud de la subsecuencia incremental más larga que termina con el índice i es 1 mayor que la longitud máxima de todas las subsecuencias incrementales más largas que terminan con el índice do i, donde arr[j] (j lo tanto, vemos que el problema LIS cumple con la propiedad del marco óptimo porque el problema principal se puede resolver resolviendo subtareas.


![image](https://user-images.githubusercontent.com/97768733/197422548-cc07c48c-0850-466a-8b1d-9b4b768a78bc.png)


## Codigo

* [LIS](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/DP/LIS/lis.cpp).

## Problemas


## Referencias 
* [LIS](https://es.wikipedia.org/wiki/Problema_de_la_subsecuencia_m%C3%A1s_larga).
* [LIS DP3](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/#:~:text=The%20Longest%20Increasing%20Subsequence%20(LIS)%20problem%20is%20to%20find%20the,50%2C%2060%2C%2080%7D.).

