#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
	char fish[] = ">--|>";
	char bg[] = "                    ";
	int offset = 2;
	for (int frames = 0; frames < 6; frames++) {
		char output[20];
		strncpy(output, bg, strlen(bg)+1);
		strncpy(output+offset, fish, strlen(fish));
		puts(output);
		puts("\e[2A"); //Return to beginning of line, 2 line up
		offset += 2;
		sleep(1);
	}
	sleep(2);

	return 0;
}
