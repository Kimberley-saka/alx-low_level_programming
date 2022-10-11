#ifndef DOG_H
#define DOG_H

/**
 * struct dog - all infoabout dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: definition of the structure dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * additional function prototypes
 */
typedef struct dog my_dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
