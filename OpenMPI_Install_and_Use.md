[Retour](../../)

# OpenMPI - Installation et utilisation

> **NB** : Penser à vous déplacer dans le sous-dossier **open-mpi** du projet.

## Installation de OpenMPI

### Linux

```
sudo apt install openmpi-bin openmpi-common libopenmpi-dev
```

### MacOS

```
brew install open-mpi
```

## Utilisation de OpenMPI

### Compilation

```
mpicc test2.c -o test2_exe
```

### Exécution

#### Sans hosts

Si le processeur a un nombre de coeurs suffisant, il n'y a pas besoin de `hosts`.

```
mpirun -np <nb_coeurs> test2_exe
```

#### Avec hosts

Si le processeur n'a pasun nombre de coeurs suffisant, il y a besoin de `hosts`.

```
mpirun --hostfile <fichier_host> -np <nb_coeurs> test2_exe
```

## Compilation et exécution des fichiers de test

### Test 1

```
mpicc test1.c -o test1_exe
mpirun -np 2 test1_exe
mpirun --hostfile hosts -np 2 test1_exe
```

### Test 2

```
mpicc test2.c -o test2_exe && mpirun -np 2 test2_exe
```

### Test 3

```
mpicc test3.c -o test3_exe && mpirun --hostfile hosts -np 7 test3_exe
```

### Test 4

```
mpicc test4.c -o test4_exe && mpirun --hostfile hosts -np 7 test4_exe
```

### Test 5

```
mpicc test5.c -o test5_exe && mpirun --hostfile hosts -np 7 test5_exe
```

### Test 6

```
mpicc test6.c -o test6_exe && mpirun --hostfile hosts -np 4 test6_exe
```

### Test 7

```
mpicc test7.c -o test7_exe && mpirun --hostfile hosts -np 4 test7_exe
```

### Test 8

```
mpicc test8.c -o test8_exe && mpirun --hostfile hosts -np 4 test8_exe
```

### Test 9

```
mpicc test9.c -o test9_exe && mpirun --hostfile hosts -np 4 test9_exe
```

## Nettoyer toutes les compilations

```
rm -r *_exe
```