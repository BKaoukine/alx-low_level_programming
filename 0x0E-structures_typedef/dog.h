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


void init_dog(struct dog *d, char *name, float age, char *owner);



#endif /* MAIN_H */
