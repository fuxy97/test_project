#include <time.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		const char* filename = argv[1];
		
		srand(time(NULL));

		const size_t N = 768;

		FILE* fp;

		if ((fp = fopen(filename, "w")) != NULL)
		{
			fprintf(fp, "%u\n", N);
			for (size_t i = 0; i < N; i++)
			{
				if (i < N - 1)
				{
					fprintf(fp, "%d ", rand() % 10);
				}
				else
				{
					fprintf(fp, "%d\n", rand() % 10);
				}
			}

			printf("File %s with array of random numbers (size = %u, range = [0, 10]) has been created.\n", filename, N, UINT8_MAX);
			fclose(fp);
		}
	}
	return EXIT_SUCCESS;
}
