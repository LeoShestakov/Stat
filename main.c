#include<stdio.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <time.h>

int main() {
	struct stat data;
	if (stat("model.txt", &data) < 0) {
		printf("Error Drawing Data: %s\n", strerror(errno));
		return 0;
	}
	printf("-----Considering the file model.txt\n\n");
	printf("File size (bytes): %ld\n", data.st_size);
	printf("Permissions: %d\n", data.st_mode);
	time_t lastAccess = data.st_atime;
	printf("Last accessed: %s\n", ctime(&lastAccess));
	return 0;
}
