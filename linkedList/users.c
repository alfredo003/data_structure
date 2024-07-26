#include <stdio.h>
typedef struct user{
	int iduser;
	char name[50];
	char gender;
	struct user *next;
} User;

void insert(User **user,int iduser,char name[],char gender)
{
	User *new_user = (User *)malloc(sizeof(User));

	if(new_user)
	{
		new->iduser = iduser;
		new->name = name;
		new->gender = gender;
	}
}

int main(int argc,char **argv)
{
	return (0);
}
