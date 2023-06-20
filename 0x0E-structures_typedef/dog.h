#ifndef DOG_H
#define DOG_H


/**
 * struct dog - struct dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for dog type
*/
typedef struct dog dog_t;

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog pointer
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* print_dog - function that prints a struct dog
* @d: struct dog pointer
*/
void print_dog(struct dog *d);

/**
* new_dog - function that creates a new dog
* @name: char pointer
* @age: float
* @owner: char pointer
* Return: dog_t pointer
*/
dog_t *new_dog(char *name, float age, char *owner);


/**
* free_dog - function that frees dogs
* @d: dog_t pointer
* Return: void
*/
void free_dog(dog_t *d);

#endif /* DOG_H */
