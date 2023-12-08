#ifndef COMPLEX_H
#define COMPLEX_H

// Type utilisateur complexe_t
struct complexe_t
{
    double a;
    double b;
};

typedef struct complexe_t complexe_t;

// Fonctions reelle et imaginaire
/**
 * reelle
 *
 * Cette fonction renvoie la partie reelle d'un nombre complexe
 *
 * Paramètres :
 * z    un nombre complexe_t
 *
 * retour: Re(z)
 *
 * Cas d'erreur: aucun
 */
double reelle(complexe_t z);

/**
 * imaginaire
 *
 * Cette fonction renvoie la partie imaginaire d'un nombre complexe
 *
 * Paramètres :
 * z    un nombre complexe_t
 *
 * retour: Im(z)
 *
 * Cas d'erreur: aucun
 */
/** FONCTION À DÉCLARER **/
double imaginaire(complexe_t z);

// Procédures set_reelle, set_imaginaire et init
/**
 * set_reelle
 *
 * Cette fonction modifie la partie reelle donné avec le nombre réel donné
 *
 * Paramètres :
 * z    un nombre complexe à modifier (son pointeur)
 * r    un nombre reel à insérer dans z
 *
 * retour: rien
 * Cas d'erreur: aucun
 */
void set_reelle(complexe_t *z, double r);

/**
 * set_imaginaire
 *
 * Cette fonction modifie la partie imaginaire d'un nombre complexe avec un reel donné
 *
 * Paramètres:
 * z    un nombre complexe (son pointeur)
 * r    la partie reelle à insérer
 *
 * retour: rien
 * Cas d'erreur: aucun
 */
/** PROCÉDURE À DÉCLARER **/
void set_imaginaire(complexe_t *z, double r);

/**
 * init
 *
 * CONTRAT À COMPLÉTER
 */
/** PROCÉDURE À DÉCLARER **/
void init(complexe_t *z, double r, double i);

// Procédure copie
/**
 * copie
 * Copie les composantes du complexe donné en second argument dans celles du premier
 * argument
 *
 * Paramètres :
 *   resultat       [out] Complexe dans lequel copier les composantes
 *   autre          [in]  Complexe à copier
 *
 * Pré-conditions : resultat non null
 * Post-conditions : resultat et autre ont les mêmes composantes
 */
void copie(complexe_t *resultat, complexe_t autre);

// Algèbre des nombres complexes
/**
 * conjugue
 * Calcule le conjugué du nombre complexe op et le sotocke dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut le conjugué
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : reelle(*resultat) = reelle(op), complexe(*resultat) = - complexe(op)
 */
void conjugue(complexe_t *resultat, complexe_t op);

/**
 * ajouter
 * Réalise l'addition des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche + droite
 */
void ajouter(complexe_t *resultat, complexe_t gauche, complexe_t droite);

/**
 * soustraire
 * Réalise la soustraction des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche - droite
 */
void soustraire(complexe_t *resultat, complexe_t gauche, complexe_t droite);

/**
 * multiplier
 * Réalise le produit des deux nombres complexes gauche et droite et stocke le résultat
 * dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   gauche         [in]  Opérande gauche
 *   droite         [in]  Opérande droite
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = gauche * droite
 */
void multiplier(complexe_t *resultat, complexe_t gauche, complexe_t droite);

/**
 * echelle
 * Calcule la mise à l'échelle d'un nombre complexe avec le nombre réel donné (multiplication
 * de op par le facteur réel facteur).
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe à mettre à l'échelle
 *   facteur        [in]  Nombre réel à multiplier
 *
 * Pré-conditions : resultat non-null
 * Post-conditions : *resultat = op * facteur
 */
void echelle(complexe_t *resultat, complexe_t op, double facteur);

/**
 * puissance
 * Calcule la puissance entière du complexe donné et stocke le résultat dans resultat.
 *
 * Paramètres :
 *   resultat       [out] Résultat de l'opération
 *   op             [in]  Complexe dont on veut la puissance
 *   exposant       [in]  Exposant de la puissance
 *
 * Pré-conditions : resultat non-null, exposant >= 0
 * Post-conditions : *resultat = op * op * ... * op
 *                                 { n fois }
 */
void puissance(complexe_t *resultat, complexe_t op, int exposant);

// Module et argument
/**
 * module_carre
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/
double module_carre(complexe_t op);

/**
 * module
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/
double module(complexe_t op);

/**
 * argument
 *
 * CONTRAT À COMPLETER
 */
/** FONCTION À DÉCLARER **/
double argument(complexe_t op);

#endif // COMPLEXE_H
