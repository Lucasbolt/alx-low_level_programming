#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a little description about a dog
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
#endif
