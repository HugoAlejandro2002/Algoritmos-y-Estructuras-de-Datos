<h1 align="center"> Digit </h1>

Dado un número dado x que consta de n dígitos. La idea básica detrás del dígito DP es representar los dígitos como un array de dígitos t. Supongamos que tenemos tn, tn-1, tn-2 ... t2, t1 es la representación decimal, donde ti (0 <= n) es el dígito i de la derecha. El dígito más a la izquierda de tn es el dígito más significativo.

Ahora, después de presentar un cierto número de esta manera, generamos números más pequeños que el número dado y al mismo tiempo calculamos con DP si el número cumple o no con la propiedad dada. Comenzamos generando números enteros con número de dígitos de 1 hasta n. Los enteros con menos dígitos que n se pueden analizar estableciendo los dígitos más a la izquierda en cero.

![image](https://user-images.githubusercontent.com/97768733/196455492-5d521a4c-643f-4eb8-abbe-ba256a1f7db9.png)

## Codigo

* [Backtracking 8 queen](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/BackTracking/8queenproblem.cpp).

## Problemas

## Referencias 

* Github : Algoritmica 2. [Backtracking](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Backtracking).
* [Backtracking](https://docs.jjpeleato.com/algoritmia/backtracking).  
* [Backtracking Algorithm](https://www.educative.io/answers/what-is-a-binary-indexed-tree).
