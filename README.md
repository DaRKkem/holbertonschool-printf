# _printf — Implémentation personnalisée de la fonction `printf`

**Projet de groupe — Holberton School / ALX**  
Dépôt : `holbertonschool-printf`

## Présentation
`_printf` produit une sortie formatée vers la sortie standard (`stdout`) et retourne le nombre de caractères affichés (hors caractère nul terminal).  
Ce projet permet de maîtriser :
- les fonctions variadiques (`va_start`, `va_end`, `va_arg`, `va_copy`),  
- le parsing manuel d’une chaîne de format,  
- la conversion de nombres dans différentes bases,  
- l’écriture bas niveau avec `write`.

---

## Spécificateurs supportés
| Spécificateur | Description |
|---:|---|
| `%c` | Caractère |
| `%s` | Chaîne de caractères |
| `%%` | Pourcentage littéral |
| `%d` / `%i` | Entier signé (base 10) |
| `%u` | Entier non signé (base 10) |
| `%!` | Pourcentage littéral suivit d'un point d'exclamation |
| `%K` | Pourcentage littéral suivit de la lettre K |

> Conformément au cahier des charges : **pas** de gestion des flags, largeur, précision ou modificateurs de longueur.

---

## Prototype
```c
int _printf(const char *format, ...);
```

---

## Contraintes techniques
- Éditeurs autorisés : `vi`, `vim`, `emacs`.  
- Compilation (Ubuntu 20.04) :
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
- Style Betty strict (`betty-style.pl`, `betty-doc.pl`)  
- Aucune variable globale  
- Maximum 5 fonctions par fichier  
- Tous les prototypes dans `main.h` (avec include guard)  
- Fonctions autorisées :  
  `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`

---

## Structure suggérée du projet
```
.
├── main.h           # prototypes et includes
├── _printf.c        # fonction principale
├── function.c       # %c, %s, %d, %i, %u
├── utils.c          # helpers et conversions
├── _putchar         # fonction putchar
├── get_func         # structure 
├── struct.h         # structures types
└── tests/
    └── printf_test.c
```

---

## Exemple d’utilisation
```c
#include "main.h"

int main(void)
{
    int len = _printf("Chaîne : %s\n", "Hello world");
    _printf("Caractère : [%c]\n", 'H');
    _printf("Entier négatif : %d\n", -762534);
    _printf("Unsigned : %u | Octal : %o | Hex : %x | HEX : %X\n",
            4294967295u, 255, 255, 255);
    _printf("Pointeur : %p\n", (void*)&main);
    _printf("Pourcentage : %%\n");
    _printf("Longueur totale : %d\n", len);
	_printf("%!\n");
	_printf("%K\n");
    return (0);
}
```

Compilation :
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf_test
./printf_test
```

> `-Wno-format` est toléré uniquement pour les tests (évite les warnings lors de la comparaison avec le vrai `printf`).

---

## Tests et cas particuliers recommandés
- `%s` avec `NULL` → afficher `(null)`.
- Gestion de `INT_MIN`, `INT_MAX`.
- Valeurs non signées supérieures à `INT_MAX`.
- `%%`, `%!` et `%K` → ne consomme aucun argument.
- Retour correct du nombre de caractères imprimés.
- Vérification mémoire avec `valgrind` si usage de `malloc`.

---

## Checklist de conformité
- [ ] Aucun warning (sauf `-Wno-format` pour tests)  
- [ ] Aucun leak mémoire  
- [ ] Aucun variable globale  
- [ ] Style Betty OK  
- [ ] Maximum 5 fonctions par fichier  
- [ ] Tous les prototypes dans `main.h`  
- [ ] Tous les spécificateurs implémentés  
- [ ] Tests validés sur cas limites  

---

## Notes d’implémentation
- Utiliser une structure de mapping du type :

```c
typedef struct spec {
    char specifier;
    int (*f)(va_list);
} spec;
```

- Commencer par les plus simples (`%c`, `%s`, `%%`, `%!`, `%K`), puis les entiers.

---

## Auteurs
- AMBLARD Alison — `@Ali731-Amb`  
- ROSSI Damien — `@DaRKkem`  

---

## Licence
Projet interne — Holberton School / ALX  
Usage pédagogique uniquement.

> Fait avec passion ☕🚀

