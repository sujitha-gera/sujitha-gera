#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include<string.h>
int main() {
const char *filename = "output.txt";
 const char *data = "Hello, world!\n";

 // Open the file for writing, create if it doesn't exist
 int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
 if (fd == -1) {
     perror("Error opening file");
     return 1;
 }

 // Write data to the file
 ssize_t bytes_written = write(fd, data, strlen(data));

 if (bytes_written == -1) {
     perror("Error writing to file");
     close(fd);  // Close the file before returning on error
     return 1;
 }

 // Close the file
 if (close(fd) == -1) {
     perror("Error closing file");
     return 1;
 }

 printf("Data written to the file successfully.\n");

 return 0;
}
