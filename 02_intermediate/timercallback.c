#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void callback(int signum) {
    // Your callback logic here
    printf("Hello, World!\n");

    // Set up the timer again
    alarm(2);
}

int main() {
    // Set the initial timer
    signal(SIGALRM, callback);
    alarm(2);

    // Keep the program running
    while (1) {
        sleep(1);  // Sleep to allow the callback to be executed
    }

    return 0;
}
