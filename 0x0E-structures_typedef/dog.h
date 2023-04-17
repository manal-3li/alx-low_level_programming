#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @n: First member
 * @a: Second member
 * @o: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *n;
	float a;
	char *o;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *n, float a, char *o);
void print_dog(struct dog *d);
dog_t *new_dog(char *n, float a, char *o);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
