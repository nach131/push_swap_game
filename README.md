# push_swap

## Swap

<details>
  <summary>Detalle</summary>

> **sa: swap a**

 Intercambia los dos primeros elementos encima del ```stack A```. No hace nada si hay uno o menos elementos.

\

<img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/sa__swap_a.png" alt="drawing" width="250"/>

> **sb: swap b**

 Intercambia los dos primeros elementos encima del ```stack B```. No hace nada si hay uno o menos elementos.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/sb__swap_b.png" alt="drawing" width="250"/>

\

> **ss: swap sa y swap sb**

 Intercambia los dos primeros elementos encima del ```stack A``` e intercambia los dos primeros elementos encima del ```stack B```. No hace nada si hay uno o menos elementos.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/ss__swap_a_&_swap_b.png" alt="drawing" width="250"/>

\

</details>

## Push

<details>
  <summary>Detalle</summary>

> **pa: push a**

Toma el primer elemento del ```stack B``` y lo pone encima del ```stack A```. No hace nada si b está vacío.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/pa__push_b.png" alt="drawing" width="250"/>

\

> **pb: push b**

Toma el primer elemento del ```stack A``` y lo pone encima del ```stack B```. No hace nada si b está vacío.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/pb__push_a.png" alt="drawing" width="250"/>

\

</details>

## Rotate

<details>
  <summary>Detalle</summary>

> **ra: rotate a**

Desplaza hacia arriba todos los elementos del ```stack A``` una posición, de forma que el primer elemento se convierte en el último.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/ra__rotate_a.png" alt="drawing" width="250"/>

\

> **rb: rotate b**

Desplaza hacia arriba todos los elementos del ```stack B``` una posición, de forma que el primer elemento se convierte en el último.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/rb_rotate_b.png" alt="drawing" width="250"/>

\

> **rr: rotate a y rotate b**

Desplaza al mismo tiempo todos los elementos del ```stack A``` y del ```stack B``` una posición hacia arriba, de forma que el primer elemento se convierte en el último.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/rr_rotate_a_&&_rotate_b.png" alt="drawing" width="250"/>

\

</details>

## Reverse

<details>
  <summary>Detalle</summary>

> **rra: reverse rotate a**

Desplaza hacia abajo todos los elementos del ```stack A``` una posición, de forma que el último elemento se convierte en el primero.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/rra__reverse_rotate_a.png" alt="drawing" width="250"/>
 
\

> **rrb: reverse rotate b**

Desplaza hacia abajo todos los elementos del ```stack B```una posición, de forma que el último elemento se convierte en el primero.


 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/rrb__reverse_rotate_b.png" alt="drawing" width="250"/>

\

 > **rrr: reverse rotate a y reverse rotate b**  
	
Desplaza hacia abajo todos los elementos del ```stack A``` una posición y desplaza hacia abajo todos los elementos del ```stack B```una posición, de forma que el último elemento se convierte en el primero.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/rrr__reverse_rotate_a_&_reverse_rotate_b.png" alt="drawing" width="250"/>

</details>

## Salida error

La salida de error estándar `(stderr)` normalmente se muestra en la consola junto con la salida estándar `(stdout)`, a menos que se redirija a otro lugar como un archivo o una tubería. Por lo tanto, si un programa escribe en stderr y se ejecuta desde la consola, la salida de error debería ser visible en la consola.

Para redirigir la salida de error a un archivo.

```c
./push_swap 42 84 2> error.txt
```


brew install coreutils
	export NUMEROS=$(jot -n 10 1 1000 | tr '\n' ' ')


	export NUMEROS=$(shuf -i 100-500 -n 10 | tr '\n' ' ')

