USO DE BISECT:

git bisect start
git bisect bad (Marca el commit actual como malo)
git bisect good 44262c895063b1c230dbdc149235e2fbffe27565 (Marca el commit especificado como bueno)

Ahora git hará una búsqueda binaria del commit que introdujo el bug
Nos cargará cada commit de la búsqueda binaria y si el bug sigue existiendo... git bisect bad
Si el bug ya no existe... git bisect good
Así hasta que no quede más por buscar y git nos devolverá el commit que introdujo el issue.