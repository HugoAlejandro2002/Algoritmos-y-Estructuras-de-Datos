<h1 align="center"> Digit </h1>

Dado un número dado x que consta de n dígitos. La idea básica detrás del dígito DP es representar los dígitos como un array de dígitos t. Supongamos que tenemos tn, tn-1, tn-2 ... t2, t1 es la representación decimal, donde ti (0 <= n) es el dígito i de la derecha. El dígito más a la izquierda de tn es el dígito más significativo.

Ahora, después de presentar un cierto número de esta manera, generamos números más pequeños que el número dado y al mismo tiempo calculamos con DP si el número cumple o no con la propiedad dada. Comenzamos generando números enteros con número de dígitos de 1 hasta n. Los enteros con menos dígitos que n se pueden analizar estableciendo los dígitos más a la izquierda en cero.