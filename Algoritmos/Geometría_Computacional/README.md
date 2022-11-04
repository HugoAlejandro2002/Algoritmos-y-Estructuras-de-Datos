<h1 align="center"> Geometria Computacional </h1>

La geometría computacional es una rama de la informática que se especializa en el estudio de algoritmos que se pueden expresar en forma geométrica. Hay una serie de problemas puramente geométricos que surgen del estudio de dichos algoritmos, y este tipo de problema también se considera parte de la geometría computacional y también se considera una rama de los gráficos por computadora.

La geometría es una parte muy importante de la mayoría de los programas gráficos, especialmente los juegos de computadora, y los problemas de geometría llegaron para quedarse.

## Vector

Los vectores forman la base de muchos métodos para resolver problemas de geometría. Formalmente, un vector se define en términos de dirección y magnitud. Para la geometría bidimensional, un vector se puede representar como un par de números x e y que definen tanto la dirección como la magnitud. Por ejemplo, el segmento (1,3) a (5,1) se puede representar mediante un vector (4, -2). Sin embargo, es importante comprender que, en este caso, el vector solo determina la dirección y el tamaño del segmento, no la posición inicial o final del vector.

![image](https://user-images.githubusercontent.com/97768733/199876145-2a46eae6-7dd0-41e5-a7d6-6e625d1ada25.png)

## Suma de Vectores

Hay muchas matemáticas que se pueden hacer con vectores. El más simple de estos es la suma: puede sumar dos vectores y el resultado es un nuevo vector. Si tiene dos vectores (x1, y1) y (x2, y2), entonces la suma de los dos vectores es solo (x1 x2, y1 y2). La siguiente imagen muestra la suma de cuatro vectores. Recuerda que los agregas en el orden que normalmente lo harías, no importa. En estas lecciones, usaremos los signos más y menos para representar sumas y restas de vectores, cada una de las cuales es simplemente una suma o resta de los elementos de un vector.

![image](https://user-images.githubusercontent.com/97768733/199876516-12670468-c82f-43df-8cf2-bac9a68dc05e.png)

## Producto Escalar o Producto Punto

El producto punto de dos vectores es simplemente la suma de los productos de los elementos correspondientes. Por ejemplo, el producto escalar de (x1, y1) y (x2, y2) es x1*x2 + y1*y2. Tenga en cuenta que esto no es un vector, sino que es simplemente un número único (llamado escalar). La razón por la que esto es útil es que el producto escalar, A ⋅ B = |A||B|Cos(θ), donde θ es el ángulo entre A y B. |A| se llama la norma del vector, y en un problema de geometría 2-D es simplemente la longitud del vector, sqrt(x2+y2). Por lo tanto, podemos calcular Cos(θ) = (A ⋅ B)/(|A||B|). Usando la función acos, podemos encontrar θ. Es útil recordar que Cos(90) = 0 y Cos(0) = 1, ya que esto te dice que un producto escalar de 0 indica dos líneas perpendiculares, y que el producto escalar es mayor cuando las líneas son paralelas. Una nota final sobre los productos escalares es que no se limitan a la geometría 2D. Podemos tomar productos escalares de vectores con cualquier número de elementos, y la igualdad anterior sigue siendo válida.

![image](https://user-images.githubusercontent.com/97768733/199876992-2de86fdd-c05c-459f-859e-6c23cd4ba793.png)

## Producto Vectorial o Producto Cruz

El producto cruzado de dos vectores 2D es x1 * y2 - y1 * x2 Técnicamente, el producto cruzado es en realidad un vector, de la misma magnitud que el anterior, y que va en la dirección z. Como por ahora solo estamos trabajando con geometría 2D, ignoraremos este hecho y lo usaremos como una cantidad escalar. Como el producto de puntos, A x B = | un || B | Sin (θ). Sin embargo, en este caso, θ tiene un significado ligeramente diferente: | θ | ángulo entre dos vectores, pero θ puede ser positivo o negativo según la regla de la mano derecha. En geometría 2D, esto significa que si A está a menos de 180 grados en el sentido de las agujas del reloj desde B, el valor es positivo. Otro dato útil sobre el producto vectorial es el valor absoluto | un || B | Sin (θ) es igual al área de un paralelogramo con dos lados formados por A y B. Además, el triángulo formado por A, B y la línea roja en el diagrama tiene la mitad del área de un paralelogramo, por lo que también podemos calcular su área a partir del producto de diagonales.

![image](https://user-images.githubusercontent.com/97768733/200006525-39adae1b-98d8-49df-adbe-b951c41de7fe.png)


## Codigo

* [Dinic](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/Teoria%20de%20Grafos/Dinic/dinic.cpp)

## Problemas

## Referencias 

* [Dinic](https://es.wikipedia.org/wiki/Algoritmo_de_Dinic).  
* Github : Algoritmica 2. [Dinic](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Teoria%20de%20Grafos/Dinic).
* [Understanding Dinic’s Algorithm](https://medium.com/smucs/understanding-dinics-algorithm-ebf892e66227).
