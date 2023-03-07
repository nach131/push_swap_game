# push_swap

La salida de error estándar `(stderr)` normalmente se muestra en la consola junto con la salida estándar `(stdout)`, a menos que se redirija a otro lugar como un archivo o una tubería. Por lo tanto, si un programa escribe en stderr y se ejecuta desde la consola, la salida de error debería ser visible en la consola.

Para redirijir la salida de error a un archivo.

```c
./push_swap 42 84 2> error.txt
```


brew install coreutils
	export NUMEROS=$(jot -n 10 1 1000 | tr '\n' ' ')


	export NUMEROS=$(shuf -i 100-500 -n 10 | tr '\n' ' ')
