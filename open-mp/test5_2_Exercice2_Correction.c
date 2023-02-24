#include <stdio.h>
#include <math.h>
#include <omp.h>

/*
 * Desciption :
 * 		Ce programme est un petit programme de test.
 *      Il permet de calculer PI en tant que moyenne d'une fonction f
 *      sur un intervalle [0,1] avec une précision de 100 pas (num_steps)
 *      et une fonction f(x) = 4 / (1 + x²).
 * Résultat :
 * 		Il affiche PI.
 */

static long num_steps = 100000;
double step;
int main(){
    int i; double x, pi, sum = 0.0;
    step = 1.0 / (double) num_steps;
    for(i=0; i<num_steps; i++){
        x = (i+0.5) * step;
        sum = sum + 4.0 / (1.0 + x * x);
    }
    pi = step * sum;
    //-
    printf("[PI:(%f)]\n", pi);
}