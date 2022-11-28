# ASD-Serie2

Notes de cours :
• Les trois instructions répétitives sont :
◦ Tant que <condition> faire <action> ftq ;
◦ Pour <compteur> ← <valInitiale> a <valFinale> faire <action> fpour ;
◦ Repeter <action> Jusqu'a <condition> ;
• Les délimiteurs de bloc répétitif ftq, fpour sont obligatoires même s'il n'y a qu'une seule instruction. 
• <compteur> est une variable entière. Sa modification est interdite dans le bloc répétitif. <valFinale> est une 
expression dont l’évaluation donne un entier ou un réel.
• On suppose qu'il n'y a pas d’opérateurs (ni de fonctions) prédéfinis pour le modulo, la division entière ou la 
puissance ;


Exercice 1 :
Algorithme Lisible ; Var A,B,S,I : entier ; Début Lire(A,B) ;
S ←A ; I ←1 ; Tantque I <= B Faire S ←S+I ; I ←I+1 ; ftq ;
Écrire(S) ; Fin.
1. L’algorithme Lisible est il facilement lisible ?
2. Modifier la présentation de Lisible pour qu’il soit plus
compréhensible.
3. L'utilisation de Tant que au lieu de pour et repeter dans ce
traitement est elle judicieuse ? Justifier.


Exercice 2 :
Pour réaliser la somme de N nombres lus, un débutant a
proposé la solution suivante :
Algorithme SommeNbr ;
Var N,nbr,S,I : entier ;
Début
ecrire('donner le nombre d elements');
Lire(N) ;
Pour I ←1 a N Faire
ecrire('donner vos elements:');
Lire(nbr);
fpour ;
Pour I ←1 a N Faire
 S ←0 ;
S ← S+nbr;
Ecrire('La somme de vos elements est :',S) ; 
fpour ;
Fin.
1. Dérouler cet algorithme pour les valeurs N=4 et les
éléments : 10, 15, 22, 8 ; puis déduire que sa solution est
fausse. 
2. A votre avis quel raisonnement erroné a conduit ce
débutant a commettre ces erreurs ? 


Exercice 3 :
Écrire un algorithme qui détermine la somme des N premiers
nombres entiers positifs. Exemple : si N=4 alors on cherche la
somme 1+2+3+4=10.


Exercice 4 :
Ecrire un algorithme qui détermine la puissance nième d'un (n
entier positif ou nul) nombre a donné(i.e. : a^n).

Exercice 5 :
Ecrire un algorithme qui détermine le reste de la division d’un
nombre entier A par un nombre entier B.

Exercice 6 :
Écrire un algorithme qui vérifie si un nombre donné est divisible par 2.

Exercice 7 :
Écrire un algorithme qui détermine le minimum d’une suite de N nombres entiers.

Exercice 8 :
Un nombre est dit premier s’il n’accepte comme diviseur que 1 et lui même.
Écrire un algorithme qui vérifie si un nombre est premier.
 
Exercice 9 :
Écrire un algorithme qui détermine le PGCD de deux nombres.


Exercice 11 :
Construire un algorithme permettant, pour un nombre N à quatre chiffres, de permuter son premier chiffre avec le dernier et le deuxième 
avec le troisième. 

Exercice 12 :
Soient les algorithmes suivants :

Algorithme version1 ;
Var N,M,I,J,comp: entier ;
Début
Lire(N,M) ;
comp←1; 
I←1 ;
Tantque I <= N Faire
J←1 ;
Tantque J <= M Faire
ecrire(I,J,comp);
comp ← comp+1 ;
J←J+1 ;
ftq ;
I←I+1 ;
ftq ;
Fin.

Algorithme version2 ;
Var N,M,I,J,comp: entier ;
Début
Lire(N,M) ;comp←1; 
I←1 ;
J←1 ;
Tantque (I <= N) et (J <= M) Faire
ecrire(I,J,comp);
comp ← comp+1 ;

Exercices supplémentaires

Exercice 13 :
Algorithme Inconnu ;
Var A,B,S,I : entier ;
Début
Lire(A,B) ;
S ←A ;
I ←1 ;
Tantque I  B Faire
S ←S+I ;
I ←I+1 ;
ftq ;
Écrire(S) ;
Fin.
1. Dérouler cet algorithme avec les valeurs A=2 et B=4, et
A=4 et B = 2 ?
2. En déduire ce que fait cet algorithme.

Exercice 14 :
Algorithme Bizarre1 ;
Var A,S, Compteur : entier ;
Début
Lire(A) ;
S ←0 ;
Compteur ←1 ;
Tantque Compteur <= A Faire
S ←S+ Compteur ;
Ecrire(Compteur) ;
ftq ;
Écrire(S) ;
Fin.
Algorithme Bizarre2 ;
Var A,S, Compteur : entier ;
Début
Lire(A) ;
S ←0 ;
Tantque Compteur  A Faire
S ←S+ Compteur ;
Compteur ← Compteur +1 ;
Ecrire(Compteur) ;
ftq ;
Écrire(S) ;
Fin.
1-Dérouler les deux algorithmes ci-dessus. Que peut-on
conclure ?

Exercice 15 :
Ecrire un algorithme qui détermine la puissance nième d'un (n
entier quelconque) nombre a donné(i.e. : a).

Exercice 16 :
Ecrire un algorithme qui détermine le quotient de la division d’un nombre entier A par un nombre entier B.

Exercice 17 :
Un nombre est dit parfait s’il est égal à la somme de ses diviseurs en omettant le nombre lui même.
Exemple : six est un nombre parfait car : 6 = 1+2+3.
Ecrire un algorithme qui vérifie si un nombre est parfait.

