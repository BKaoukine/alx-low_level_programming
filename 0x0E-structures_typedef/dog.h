#ifndef MAIN_H
#define MAIN_H

/**
* struct dog - struct dog type
*@name: dog's name
*@age: age of the dog
*@owner: name of the dog's owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog	dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif /* MAIN_H */
