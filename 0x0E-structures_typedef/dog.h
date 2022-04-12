#ifndef PERRITU_H
#define PERRITU_H

/* ************ INICIO ESTRUCTURAS ******************/

/**
 * struct dog - this structure store few dog's characteristics
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description:  this structure store few dog's characteristics
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - this structure store few dog's characteristics
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description:  this structure store few dog's characteristics
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* ************ FIN ESTRUCTURAS ******************/


/* ************ INICIO FUNCIONES ******************/

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* ************ FIN FUNCIONES ******************/

#endif /* PERRITU_H */
