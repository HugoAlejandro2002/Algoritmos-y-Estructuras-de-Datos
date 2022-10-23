Dada una barra de longitud n y una tabla con los precios de todas las piezas menores que n, determine la ganancia máxima que se puede obtener cortando una barra y vendiendo sus piezas.
El problema del corte de barras es una versión unidimensional del cutting stock problem. Este es un problema NP-completo.

Una solución lenta a este problema es generar todas las configuraciones de diferentes piezas y encontrar la configuración de mayor precio. Pero esta solución es exponencial. Si analizamos, veremos que hay varios subproblemas que se resuelven una y otra vez, lo que implica que podemos usar DP.
