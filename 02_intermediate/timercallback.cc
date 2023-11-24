#include<iostream>
#include<ctime>
#include<signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/time.h>
#include <signal.h>

struct details{
    int street{0};
    int age{0};
    double phonenum{0};
};

struct details* fillValues()
{
    struct details* detail = (struct details*)(std::calloc(1,sizeof(details)));
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    // Generate a random number between 1 and 10
    int random_number_street = std::rand() % 5 + 1;
    int random_number_age = std::rand() % 10 + 1;
    double random_number = std::rand() % 10000000000 + 1;

    detail->street = random_number_street;
    detail->age = random_number_age;
    detail->phonenum = random_number;
    return detail;
}
void callback(int signum)
{
    struct details *detail = fillValues();
    
    std::cout<< "Details->age : " << detail->age <<'\n'<< "Details->phone : "<<detail->phonenum<<'\n'<<"Details->street : "<<detail->street<<std::endl;
    std::free(detail);
}

int main() {
    // Set up the timer
    struct itimerval timer;
    timer.it_interval.tv_sec = 2;  // Interval for recurring timer
    timer.it_interval.tv_usec = 0;
    timer.it_value.tv_sec = 2;     // Initial delay
    timer.it_value.tv_usec = 0;

    // Install the signal handler for SIGALRM
    signal(SIGALRM, callback);
    // Set the timer
    if (setitimer(ITIMER_REAL, &timer, NULL) == -1) {
        perror("setitimer");
        exit(EXIT_FAILURE);
    }

    // Keep the program running
    while (1) {
        // Your main logic here

        // Sleep to allow the callback to be executed
        usleep(100000);  // 100,000 microseconds = 0.1 seconds
    }

    return 0;
}