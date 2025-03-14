#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - structure représentant un chien
 *
 * @name: Le nom du chien (une chaîne de caractères)
 * @age: L'âge du chien (un nombre réel)
 * @owner: Le nom du propriétaire du chien (une chaîne de caractères)
 */
struct dog
	{
	char *name;
	float age;
	char *owner;
	};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
