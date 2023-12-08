#include "complexe.h"
#include <math.h> // Pour certaines fonctions trigo notamment

// Implantations de reelle et imaginaire
/** FONCTION reelle À IMPLANTER **/
double reelle(complexe_t z)
{
    return z.a;
}

/** FONCTION imaginaire À IMPLANTER **/
double imaginaire(complexe_t z)
{
    return z.b;
}

// Implantations de set_reelle et set_imaginaire
/** PROCÉDURE set_reelle À IMPLANTER **/
void set_reelle(complexe_t *p_z, double r)
{
    p_z->a = r;
}
/** PROCÉDURE set_imaginaire À IMPLANTER **/
void set_imaginaire(complexe_t *p_z, double r)
{
    p_z->b = r;
}

/** PROCÉDURE init À IMPLANTER **/
void init(complexe_t *p_z, double r, double i)
{
    p_z->a = r;
    p_z->b = i;
}

// Implantation de copie
/** PROCÉDURE copie À IMPLANTER */
void copie(complexe_t *resultat, complexe_t autre)
{
    *resultat = autre;
}

// Implantations des fonctions algébriques sur les complexes
/** PROCÉDURE conjugue À IMPLANTER **/
void conjugue(complexe_t *resultat, complexe_t op)
{
    resultat->a = op.a;
    resultat->b = -op.b;
}

/** PROCÉDURE ajouter À IMPLANTER **/
void ajouter(complexe_t *resultat, complexe_t gauche, complexe_t droite)
{
    resultat->a = gauche.a + droite.a;
    resultat->b = gauche.b + droite.b;
}

/** PROCÉDURE soustraire À IMPLANTER **/
void soustraire(complexe_t *resultat, complexe_t gauche, complexe_t droite)
{
    resultat->a = gauche.a - droite.a;
    resultat->b = gauche.b - droite.b;
}

/** PROCÉDURE multiplier À IMPLANTER **/
void multiplier(complexe_t *resultat, complexe_t gauche, complexe_t droite)
{
    resultat->a = (gauche.a * droite.a) - (gauche.b * droite.b);
    resultat->b = (gauche.a * droite.b) + (gauche.b * droite.a);
}

/** PROCÉDURE echelle À IMPLANTER **/
void echelle(complexe_t *resultat, complexe_t op, double facteur)
{
    resultat->a = op.a * facteur;
    resultat->b = op.b * facteur;
}

/** PROCÉDURE puissance À IMPLANTER **/
void puissance(complexe_t *resultat, complexe_t op, int exposant)
{
    complexe_t temp = op;

    if (exposant == 0)
    {
        resultat->a = 1;
        resultat->b = 0;
    }
    else
    {
        for (int i = 1; i < exposant; i++)
        {
            multiplier(&temp, temp, op);
        }
        *resultat = temp;
    }
}

// Implantations du module et de l'argument
/** FONCTION module_carre À IMPLANTER **/
double module_carre(complexe_t op)
{
    return op.a * op.a + op.b * op.b;
}

/** FONCTION module À IMPLANTER **/
double module(complexe_t op)
{
    return sqrt(module_carre(op));
}

/** FONCTION argument À IMPLANTER **/
double argument(complexe_t op)
{
    return atan2(op.b, op.a);
}