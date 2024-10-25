#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include<string.h>
int main() {
//const char *filename = "output.txt";
 char *data[10];

 // Open the file for writing, create if it doesn't exist
 int fd = open("output.txt",O_RDWR);
 if (fd == -1) {
     perror("Error opening file");
     return 1;
 }
 int rd=read(fd,data,sizeof(data));
 // Write data to the file
 int res = write(fd, data, strlen(data));
printf("%s",data);
 if (res == -1) {
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
