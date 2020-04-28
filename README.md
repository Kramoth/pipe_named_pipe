# Pipe and Named Piped
Ce répertoire permet d'illustrer ce qu'est le fork, les pipes et les pipes nommés.
Il contient un dossier include qui contient les header, un dossier fork qui contient le code source de l'exemple du fork, un dossier pipe qui contient les codes sources liés à l'exemple du pipe et dossier namedPipe qui contient les codes sources liés à l'exemple des pipes nommés.

## Compiler les script
Chaque dossier contient un CMakeLists.txt pour compiler fork par exemple, si vous êtes dans à la racine du projet

```
mkdir fork_build
cd fork_build
cmake ../fork
make
```

Pour compiler pipe, toujours en étant à la racine du projet:
```
mkdir pipe_build
cd pipe_build
cmake ../pipe
make
```
Pour compiler namedPipe, toujours en étant à la racine du projet:
```
mkdir namedPipe_build
cd namedPipe_build
cmake ../fnamedPipe
make
```

Vous pouvez aussi lancer le script install.sh qui créera un dossier bin dans lequel vous trouverez tous les binaires de fork, pipe et namedPipe.
Pour ce faire, en étant à la racine du projet:
```
./install.sh
```
## Exécuter les code
#####  Si vous avez compiler un par un
Vous trouverez dans chaque dossier build un exécutable ou deux dans le cas de namedPipe_build.
##### Si vous avez lancer install.sh
Tous les executables seront dans le dossier bin du projet.

### Lancer les binaires
#### fork
Pour fork, deplacez vous dans là où se trouve le binaire fork_example et :
```
./fork_example
```

#### pipe
Pour pipe, deplacer vous la ous se situe le binaire pipe et:
```
./pipe
```
#### named pipe

Pour named pipe, ouvrez deux terminaux dans l'un deplacez vous là où se situe le binaire writer et :

```
./writer
```
Dans l'autre terminal, deplacez vous là où se situe le binaire reader et :

```
./reader
```