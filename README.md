# Exemplo de Python & C++ usando PyBind

Exemplo simples de setup de um projeto com módulos Python escritos em C++
porque *as _vezes_ precisamos de mais performance"*.

#### Uai, como roda isso sô?

Você vai precisar de um compilar C++ instalado, GCC ou Clang.

* Clona o repositório do projeto
* Cria uma `virtualenv`
* Roda um `pip install pybind`
* Roda um python setup.py build


#### Onde meu módulo Python escrito em C++ foi parar?

Se o build deu certo vai surgir um arquivo em build/lib.*/pybr17.so que
é um módulo Python!

```
$ cd build/lib.*/
$ python    # deve funfa tanto com o 2 quanto com o 3!
>>> import pybr17
>>> pybr17.soma(2, 2)
4
```
