#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct with dog information
 * @name: first member
 * @age: second member
 * @owner: last member/third member
 * Description: stores data of diff types
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
