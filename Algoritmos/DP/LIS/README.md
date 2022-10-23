<h1 align="center"> Longests Increasing Subsequence </h1>

El problema de la subsecuencia ascendente más larga (LIS) es encontrar la longitud de la subsecuencia más larga de una cadena dada de tal manera que todos los elementos de la subsecuencia se clasifiquen en orden ascendente. Por ejemplo, la longitud del LIS para {10, 22, 9, 33, 21, 50, 41, 60, 80} es 6 y el LIS es {10, 22, 33, 50, 60, 80}.

Para encontrar el LIS para un arreglo dado, necesitamos devolver max(L(i)), donde 0 < i < n. Formalmente, la longitud de la subsecuencia incremental más larga que termina con el índice i es 1 mayor que la longitud máxima de todas las subsecuencias incrementales más largas que terminan con el índice do i, donde arr[j] (j lo tanto, vemos que el problema LIS cumple con la propiedad del marco óptimo porque el problema principal se puede resolver resolviendo subtareas.


![image](https://user-images.githubusercontent.com/97768733/197422548-cc07c48c-0850-466a-8b1d-9b4b768a78bc.png)


## Codigo

* [LIS](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/DP/Rod_Cutting/rod_cutting.cpp).

## Problemas


## Referencias 
* [Cutting Stock](https://en.wikipedia.org/wiki/Cutting_stock_problem#Illustration_of_one-dimensional_cutting-stock_problem).
* [Rod Cutting DP](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/).

