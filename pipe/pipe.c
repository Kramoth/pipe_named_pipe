int main()
{
	pid_t pFils;
	int descripteur[2];
	char message[256];

	pipe(descripteur);
	pFils=fork();
	

}