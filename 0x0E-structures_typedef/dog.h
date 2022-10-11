#define DOG_H
#ifndef DOG_H

/**
 * struct dog - all infoabout dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
}
#endif
/**
 * my_dog - typedef for dog
 */
typedef struct dog my_dog;
int _putchar(char);
