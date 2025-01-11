# Todo

## Liste de contrôle des instructions

- ✅ sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a. Ne fait rien s’il n’y en a qu’un ou aucun.
- ✅ sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b. Ne fait rien s’il n’y en a qu’un ou aucun.
- ✅ ss : sa et sb en même temps.
- ✅ pa (push a) : Prend le premier élément au sommet de b et le met sur a. Ne fait rien si b est vide.
- ✅ pb (push b) : Prend le premier élément au sommet de a et le met sur b. Ne fait rien si a est vide.
- ✅ ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a. Le premier élément devient le dernier.
- ✅ rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b. Le premier élément devient le dernier.
- ✅ rr : ra et rb en même temps.
- ✅ rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de la pile a. Le dernier élément devient le premier.
- ✅ rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de la pile b. Le dernier élément devient le premier.
- ✅ rrr : rra et rrb en même temps. 7

## Liste de contrôle des erreurs

- ✅ Le programme doit fonctionner avec plusieurs arguments numériques
  - ✅ ./push_swap 1 3 5 +9 20 -4 50 60 04 08
- ✅ Le programme fonctionne également si vous recevez une seule liste de caractères en tant que paramètre
  - ✅ ./push_swap "3 4 6 8 9 74 -56 +495"
- ✅ Le programme ne devrait PAS fonctionner s'il rencontre un autre personnage
  - ✅ ./push_swap 1 3 chien 35 80 -3
  - ✅ ./push_swap un
  - ✅ ./push_swap 1 2 3 5 67b778 947
  - ✅ ./push_swap " 12 4 6 8 54fhd 4354 "
  - ✅ ./push_swap 1 -- 45 32
    - ✅ ces exemples devraient renvoyer « Erreur\n »
- Le programme ne devrait PAS fonctionner s'il rencontre un nombre double
  - ✅ ./push_swap 1 3 58 9 3
  - ✅ ./push_swap 3 03
  - ✅ ./push_swap " 49 128 50 38 49 "
    - ✅ ces exemples devraient renvoyer « Erreur\n »
  - ✅ ./push_swap "95 99 -9 10 9"
    - ✅ cet exemple devrait fonctionner car -9 et 9 ne sont pas égaux
- Le programme devrait fonctionner avec INT MAX et INT MIN
  - ✅ ./push_swap 2147483647 2 4 7
  - ✅ ./push_swap 99 -2147483648 23 545
  - ✅ ./push_swap "2147483647 843 56544 24394"
    - ✅ ces exemples devraient fonctionner et trier votre liste
  - ✅ ./push_swap 54867543867438 3
  - ✅ ./push_swap -2147483647765 4 5
  - ✅ ./push_swap "214748364748385 28 47 29"
    - ✅ ces exemples devraient renvoyer « Erreur\n »

## Liste de contrôle des algorithmes/tris

- ✅ Vérifiez si l'ordre de la liste est correct ou si elle doit être triée
- Créer un petit algorithme pour les petits nombres (5 et moins)
  - Implémenter une condition pour 2 nombres
  - Créer un algorithme pour 3 nombres
  - Créer un algorithme pour 4 nombres
  - Créer un algorithme pour 5 nombres
- Créer un autre algorithme pour tous les autres nombres

> Et bien évidemment à la fin vérifiez si tout est correct ! Aucune fuite ne doit être présente , pensez à toujours libérer la mémoire allouée lorsque vous ne l'utilisez plus.
