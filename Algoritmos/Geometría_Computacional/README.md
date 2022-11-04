<h1 align="center"> Geometria Computacional </h1>

La geometría computacional es una rama de la informática que se especializa en el estudio de algoritmos que se pueden expresar en forma geométrica. Hay una serie de problemas puramente geométricos que surgen del estudio de dichos algoritmos, y este tipo de problema también se considera parte de la geometría computacional y también se considera una rama de los gráficos por computadora.

La geometría es una parte muy importante de la mayoría de los programas gráficos, especialmente los juegos de computadora, y los problemas de geometría llegaron para quedarse.

## Vector:

Los vectores forman la base de muchos métodos para resolver problemas de geometría. Formalmente, un vector se define en términos de dirección y magnitud. Para la geometría bidimensional, un vector se puede representar como un par de números x e y que definen tanto la dirección como la magnitud. Por ejemplo, el segmento (1,3) a (5,1) se puede representar mediante un vector (4, -2). Sin embargo, es importante comprender que, en este caso, el vector solo determina la dirección y el tamaño del segmento, no la posición inicial o final del vector.

![image](https://user-images.githubusercontent.com/97768733/199876145-2a46eae6-7dd0-41e5-a7d6-6e625d1ada25.png)

## Suma de Vectores:

Hay muchas matemáticas que se pueden hacer con vectores. El más simple de estos es la suma: puede sumar dos vectores y el resultado es un nuevo vector. Si tiene dos vectores (x1, y1) y (x2, y2), entonces la suma de los dos vectores es solo (x1 x2, y1 y2). La siguiente imagen muestra la suma de cuatro vectores. Recuerda que los agregas en el orden que normalmente lo harías, no importa. En estas lecciones, usaremos los signos más y menos para representar sumas y restas de vectores, cada una de las cuales es simplemente una suma o resta de los elementos de un vector.

![image](https://user-images.githubusercontent.com/97768733/199876516-12670468-c82f-43df-8cf2-bac9a68dc05e.png)

## Producto Escalar o Producto Punto:

El producto punto de dos vectores es simplemente la suma de los productos de los elementos correspondientes. Por ejemplo, el producto escalar de (x1, y1) y (x2, y2) es x1*x2 + y1*y2. Tenga en cuenta que esto no es un vector, sino que es simplemente un número único (llamado escalar). La razón por la que esto es útil es que el producto escalar, A ⋅ B = |A||B|Cos(θ), donde θ es el ángulo entre A y B. |A| se llama la norma del vector, y en un problema de geometría 2-D es simplemente la longitud del vector, sqrt(x2+y2). Por lo tanto, podemos calcular Cos(θ) = (A ⋅ B)/(|A||B|). Usando la función acos, podemos encontrar θ. Es útil recordar que Cos(90) = 0 y Cos(0) = 1, ya que esto te dice que un producto escalar de 0 indica dos líneas perpendiculares, y que el producto escalar es mayor cuando las líneas son paralelas. Una nota final sobre los productos escalares es que no se limitan a la geometría 2D. Podemos tomar productos escalares de vectores con cualquier número de elementos, y la igualdad anterior sigue siendo válida.

![image](https://user-images.githubusercontent.com/97768733/199876992-2de86fdd-c05c-459f-859e-6c23cd4ba793.png)

## Producto Vectorial o Producto Cruz:

El producto cruzado de dos vectores 2D es x1 * y2 - y1 * x2 Técnicamente, el producto cruzado es en realidad un vector, de la misma magnitud que el anterior, y que va en la dirección z. Como por ahora solo estamos trabajando con geometría 2D, ignoraremos este hecho y lo usaremos como una cantidad escalar. Como el producto de puntos, A x B = | un || B | Sin (θ). Sin embargo, en este caso, θ tiene un significado ligeramente diferente: | θ | ángulo entre dos vectores, pero θ puede ser positivo o negativo según la regla de la mano derecha. En geometría 2D, esto significa que si A está a menos de 180 grados en el sentido de las agujas del reloj desde B, el valor es positivo. Otro dato útil sobre el producto vectorial es el valor absoluto | un || B | Sin (θ) es igual al área de un paralelogramo con dos lados formados por A y B. Además, el triángulo formado por A, B y la línea roja en el diagrama tiene la mitad del área de un paralelogramo, por lo que también podemos calcular su área a partir del producto de diagonales.

![image](https://user-images.githubusercontent.com/97768733/200006525-39adae1b-98d8-49df-adbe-b951c41de7fe.png)

## Área de un Paralelogramo o un Triángulo:

Dados tres puntos A, B y C. El área formada se define como el producto cruz de dos vectores resultantes de dichos puntos. Por ejemplo podemos tener al punto A fijado y sacar dos vectores con B y C. Y el producto cruz de ambos será el área del paralelogramo. Y si queremos el area del triángulo, solo dividimos entre 2.

![image](https://user-images.githubusercontent.com/97768733/200011029-90f86521-6210-4a96-a562-2a98c5c8f457.png)

## Rectas:

Una recta se define matemáticamente por un vector y un punto tal que a través de los primeros infinitos puntos se pueden formar puntos con la misma dirección y sentido (o viceversa). Los segmentos de línea están formados por segmentos que definen intervalos, por lo que los puntos no son infinitos y se construyen como segmentos de línea, con estricta adherencia a los intervalos.

![image](https://user-images.githubusercontent.com/97768733/200012778-db02892f-fa7e-4420-9331-fe87cb789f3a.png)

## Punto en Segmento:

Sea P el punto a determinar su existencia en un segmento formado por A y B. El área de ABP debe ser 0, y las coordenadas de P deben estar en el rango de AB para que el punto P esté dentro del segmento.


Dados 2 segmentos formados por los puntos A y B, y el otro por C y D. Estos segmentos se van a intersectar, sí y solo sí, Los puntos se encuentras en los lados opuestos o algun punto de un segemento se encuentra dentro del otro segmento. Los puntos se encontrarán en lados opuestos si tienen producto cruz de signos distintos.

![image](https://user-images.githubusercontent.com/97768733/200017196-4935ad6e-364a-40a6-be6b-32d4b26df2a8.png)


## Polígonos convexos y no convexos:

Dado n puntos y sea P un polígono formado por n puntos. Determinar si el polígono es convexo o no convexo.

Para determinar si es convexo recorremos el polígono en el orden que se encuentre y verificamos el sentido de giro en cada vértice, esto lo haremos realizando el producto cruz. Si el polígono es convexo, todos los vértices deben tener el mismo sentido de giro, el mismo signo.

![image](https://user-images.githubusercontent.com/97768733/200020198-a8fc6450-2859-4192-a92e-832411961db8.png)

## Área de Polígonos:

Dado n puntos y sea P un polígono formado por n puntos. determinar el área dle polígono P.

Podemos triangular el polígono uniendo un vertice con el resto de los vertices. De tal forma que el área será la suma de todos los triángulo. Hay que tomar en cuenta el signo del área del polígono.

![image](https://user-images.githubusercontent.com/97768733/200050642-6b2801dd-85d6-4035-9422-04b9d482dbb8.png)

## Convex Hull

Dado un conjunto de n puntos en el plano XY, hallar el polígono convexo de menor área que contiene todos los puntos en su interior o en sus bordes (convex hull).

Para resolver este problema podemos usar el algoritmo de Convex Hull Monotone Chain:

* Ordenar los puntos de manera lexicográfica
* Luego formar la cadena inferior, empezando en el punto con menor x. Vamos a probar que tipo de polígono formamos con cada punto. Si es que nos da un polígono no convexo, retrocedemos y tomamos el siguiente punto.
* Proseguir de la misma forma pero formando la cadena desde la izquierda hasta el primer vertice.

![image](https://user-images.githubusercontent.com/97768733/200052129-90e62edd-b30d-47f7-a8b7-401db4569515.png)


## Codigo

* [Geometria Computacional](https://github.com/HugoAlejandro2002/Algoritmos-y-Estructuras-de-Datos/blob/main/Algoritmos/Teoria%20de%20Grafos/Dinic/dinic.cpp)

## Problemas

## Referencias 

* [GEOMETRY CONCEPTS PART 1: BASIC CONCEPTS](https://www.topcoder.com/thrive/articles/Geometry%20Concepts%20part%201:%20Basic%20Concepts).  
* [GEOMETRY CONCEPTS PART 2: LINE INTERSECTION AND ITS APPLICATIONS](https://www.topcoder.com/thrive/articles/Geometry%20Concepts%20part%202:%20%20Line%20Intersection%20and%20its%20Applications).
* Github : Algoritmica 2. [Geometria](https://github.com/PaulLandaeta/algoritmica2/tree/master/contenido/Geometria).
* [Geometría Computacional](https://es.wikipedia.org/wiki/Geometr%C3%ADa_computacional)

