# push_swap

> **sa: swap a**

 Intercambia los dos primeros elementos encima del ```stack A```. No hace nada si hay uno o menos elementos.

<img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/sa__swap_a.png" alt="drawing" width="300"/>

> **sb: swap b**

 Intercambia los dos primeros elementos encima del ```stack B```. No hace nada si hay uno o menos elementos.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/sb__swap_b.png" alt="drawing" width="300"/>

**ss: swap sa y swap sb**

 Intercambia los dos primeros elementos encima del ```stack A``` e intercambia los dos primeros elementos encima del ```stack B```. No hace nada si hay uno o menos elementos.

 <img src="https://github.com/nach131/push_swap/blob/Two-Struct/img/ss__swap_a_&_swap_b.png" alt="drawing" width="300"/>

La salida de error estándar `(stderr)` normalmente se muestra en la consola junto con la salida estándar `(stdout)`, a menos que se redirija a otro lugar como un archivo o una tubería. Por lo tanto, si un programa escribe en stderr y se ejecuta desde la consola, la salida de error debería ser visible en la consola.

Para redirijir la salida de error a un archivo.

```c
./push_swap 42 84 2> error.txt
```


brew install coreutils
	export NUMEROS=$(jot -n 10 1 1000 | tr '\n' ' ')


	export NUMEROS=$(shuf -i 100-500 -n 10 | tr '\n' ' ')

