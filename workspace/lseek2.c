#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main() {
    int fd = open("seeking.txt", O_RDWR | O_CREAT,0644);
    if (fd < 0) {
        perror("Failed to open file");
        return 1;
    }
    char buf[11];
    // Read the first 10 bytes
    lseek(fd, 0, SEEK_SET); // Move to the start of the file
    read(fd, buf, 10);
    printf("First read: %s\n", buf); // Output: 0123456789
    // Use SEEK_SET to move to the 5th byte
    lseek(fd, 5, SEEK_SET);
    read(fd, buf, 10);
    printf("Read after SEEK_SET to 5: %s\n", buf); // Output: 56789ABCDEFGHI
    // Use SEEK_CUR to move forward by 5 bytes
    lseek(fd, 5, SEEK_CUR);
    read(fd, buf, 10);
    printf("Read after SEEK_CUR (+5): %s\n", buf); // Output: ABCDEFGHIJ
    lseek(fd, -5, SEEK_END); // Move to 5 bytes before the end
    read(fd, buf,5);
    printf("Read after SEEK_END (-5): %s\n", buf); // Output: FGHIJ
    close(fd);
    return 0;
}

